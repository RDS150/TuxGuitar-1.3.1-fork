/*
 * Copyright 2007 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Sun designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Sun in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 */
package com.sun.media.sound;

import java.util.Arrays;

import javax.sound.sampled.AudioFormat;

import com.sun.media.sound.AudioFloatConverter;


/**
 * This class is used to store audio buffer.
 *
 * @author Karl Helgason
 */
public class SoftAudioBuffer {

    private int size;
    private float[] buffer;
    private boolean empty = true;
    private AudioFormat format;
    private AudioFloatConverter converter;
    private byte[] converter_buffer;

    public SoftAudioBuffer(int size, AudioFormat format) {
        this.size = size;
        this.format = format;
        converter = AudioFloatConverter.getConverter(format);
    }

    public AudioFormat getFormat() {
        return format;
    }

    public int getSize() {
        return size;
    }

    public void clear() {
        if (!empty) {
            Arrays.fill(buffer, 0);
            empty = true;
        }
    }

    public boolean isSilent() {
        return empty;
    }

    public float[] array() {
        empty = false;
        if (buffer == null)
            buffer = new float[size];
        return buffer;
    }

    public void get(byte[] buffer, int channel) {

        int framesize_pc = (format.getFrameSize() / format.getChannels());
        int c_len = size * framesize_pc;
        if (converter_buffer == null || converter_buffer.length < c_len)
            converter_buffer = new byte[c_len];

        if (format.getChannels() == 1) {
            converter.toByteArray(array(), size, buffer);
        } else {
            converter.toByteArray(array(), size, converter_buffer);
            if (channel >= format.getChannels())
                return;
            int z_stepover = format.getChannels() * framesize_pc;
            int k_stepover = framesize_pc;
            for (int j = 0; j < framesize_pc; j++) {
                int k = j;
                int z = channel * framesize_pc + j;
                for (int i = 0; i < size; i++) {
                    buffer[z] = converter_buffer[k];
                    z += z_stepover;
                    k += k_stepover;
                }
            }
        }

    }
}
