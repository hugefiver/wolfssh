/* certs_test.h
 *
 * Copyright (C) 2014-2018 wolfSSL Inc.
 *
 * This file is part of wolfSSH.
 *
 * wolfSSH is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * wolfSSH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with wolfSSH.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WOLFSSL_CERTS_TEST_H
#define WOLFSSL_CERTS_TEST_H

#ifdef NO_FILESYSTEM

/* ./keys/server-key-rsa.der, 2048-bit */
static const unsigned char rsa_key_der_2048[] =
{
	0x30, 0x82, 0x04, 0xA3, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 
	0x01, 0x00, 0xDA, 0x5D, 0xAD, 0x25, 0x14, 0x76, 0x15, 0x59, 
	0xF3, 0x40, 0xFD, 0x3C, 0xB8, 0x62, 0x30, 0xB3, 0x6D, 0xC0, 
	0xF9, 0xEC, 0xEC, 0x8B, 0x83, 0x1E, 0x9E, 0x42, 0x9C, 0xCA, 
	0x41, 0x6A, 0xD3, 0x8A, 0xE1, 0x52, 0x34, 0xE0, 0x0D, 0x13, 
	0x62, 0x7E, 0xD4, 0x0F, 0xAE, 0x5C, 0x4D, 0x04, 0xF1, 0x8D, 
	0xFA, 0xC5, 0xAD, 0x77, 0xAA, 0x5A, 0x05, 0xCA, 0xEF, 0xF8, 
	0x8D, 0xAB, 0xFF, 0x8A, 0x29, 0x09, 0x4C, 0x04, 0xC2, 0xF5, 
	0x19, 0xCB, 0xED, 0x1F, 0xB1, 0xB4, 0x29, 0xD3, 0xC3, 0x6C, 
	0xA9, 0x23, 0xDF, 0xA3, 0xA0, 0xE5, 0x08, 0xDE, 0xAD, 0x8C, 
	0x71, 0xF9, 0x34, 0x88, 0x6C, 0xED, 0x3B, 0xF0, 0x6F, 0xA5, 
	0x0F, 0xAC, 0x59, 0xFF, 0x6B, 0x33, 0xF1, 0x70, 0xFB, 0x8C, 
	0xA4, 0xB3, 0x45, 0x22, 0x8D, 0x9D, 0x77, 0x7A, 0xE5, 0x29, 
	0x5F, 0x84, 0x14, 0xD9, 0x99, 0xEA, 0xEA, 0xCE, 0x2D, 0x51, 
	0xF3, 0xE3, 0x58, 0xFA, 0x5B, 0x02, 0x0F, 0xC9, 0xB5, 0x2A, 
	0xBC, 0xB2, 0x5E, 0xD3, 0xC2, 0x30, 0xBB, 0x3C, 0xB1, 0xC3, 
	0xEF, 0x58, 0xF3, 0x50, 0x94, 0x28, 0x8B, 0xC4, 0x65, 0x4A, 
	0xF7, 0x00, 0xD9, 0x97, 0xD9, 0x6B, 0x4D, 0x8D, 0x95, 0xA1, 
	0x8A, 0x62, 0x06, 0xB4, 0x50, 0x11, 0x22, 0x83, 0xB4, 0xEA, 
	0x2A, 0xE7, 0xD0, 0xA8, 0x20, 0x47, 0x4F, 0xFF, 0x46, 0xAE, 
	0xC5, 0x13, 0xE1, 0x38, 0x8B, 0xF8, 0x54, 0xAF, 0x3A, 0x4D, 
	0x2F, 0xF8, 0x1F, 0xD7, 0x84, 0x90, 0xD8, 0x93, 0x05, 0x06, 
	0xC2, 0x7D, 0x90, 0xDB, 0xE3, 0x9C, 0xD0, 0xC4, 0x65, 0x5A, 
	0x03, 0xAD, 0x00, 0xAC, 0x5A, 0xA2, 0xCD, 0xDA, 0x3F, 0x89, 
	0x58, 0x37, 0x53, 0xBF, 0x2B, 0x46, 0x7A, 0xAC, 0x89, 0x41, 
	0x2B, 0x5A, 0x2E, 0xE8, 0x76, 0xE7, 0x5E, 0xE3, 0x29, 0x85, 
	0xA3, 0x63, 0xEA, 0xE6, 0x86, 0x60, 0x7C, 0x2D, 0x02, 0x03, 
	0x01, 0x00, 0x01, 0x02, 0x81, 0xFF, 0x0F, 0x91, 0x1E, 0x06, 
	0xC6, 0xAE, 0xA4, 0x57, 0x05, 0x40, 0x5C, 0xCD, 0x37, 0x57, 
	0xC8, 0xA1, 0x01, 0xF1, 0xFF, 0xDF, 0x23, 0xFD, 0xCE, 0x1B, 
	0x20, 0xAD, 0x1F, 0x00, 0x4C, 0x29, 0x91, 0x6B, 0x15, 0x25, 
	0x07, 0x1F, 0xF1, 0xCE, 0xAF, 0xF6, 0xDA, 0xA7, 0x43, 0x86, 
	0xD0, 0xF6, 0xC9, 0x41, 0x95, 0xDF, 0x01, 0xBE, 0xC6, 0x26, 
	0x24, 0xC3, 0x92, 0xD7, 0xE5, 0x41, 0x9D, 0xB5, 0xFB, 0xB6, 
	0xED, 0xF4, 0x68, 0xF1, 0x90, 0x25, 0x39, 0x82, 0x48, 0xE8, 
	0xCF, 0x12, 0x89, 0x9B, 0xF5, 0x72, 0xD9, 0x3E, 0x90, 0xF9, 
	0xC2, 0xE8, 0x1C, 0xF7, 0x26, 0x28, 0xDD, 0xD5, 0xDB, 0xEE, 
	0x0D, 0x97, 0xD6, 0x5D, 0xAE, 0x00, 0x5B, 0x6A, 0x19, 0xFA, 
	0x59, 0xFB, 0xF3, 0xF2, 0xD2, 0xCA, 0xF4, 0xE2, 0xC1, 0xB5, 
	0xB8, 0x0E, 0xCA, 0xC7, 0x68, 0x47, 0xC2, 0x34, 0xC1, 0x04, 
	0x3E, 0x38, 0xF4, 0x82, 0x01, 0x59, 0xF2, 0x8A, 0x6E, 0xF7, 
	0x6B, 0x5B, 0x0A, 0xBC, 0x05, 0xA9, 0x27, 0x37, 0xB9, 0xF9, 
	0x06, 0x80, 0x54, 0xE8, 0x70, 0x1A, 0xB4, 0x32, 0x93, 0x6B, 
	0xF5, 0x26, 0xC7, 0x86, 0xF4, 0x58, 0x05, 0x43, 0xF9, 0x72, 
	0x8F, 0xEC, 0x42, 0xA0, 0x3B, 0xBA, 0x35, 0x62, 0xCC, 0xEC, 
	0xF4, 0xB3, 0x04, 0xA2, 0xEB, 0xAE, 0x3C, 0x87, 0x40, 0x8E, 
	0xFE, 0x8F, 0xDD, 0x14, 0xBE, 0xBD, 0x83, 0xC9, 0xC9, 0x18, 
	0xCA, 0x81, 0x7C, 0x06, 0xF9, 0xE3, 0x99, 0x2E, 0xEC, 0x29, 
	0xC5, 0x27, 0x56, 0xEA, 0x1E, 0x93, 0xC6, 0xE8, 0x0C, 0x44, 
	0xCA, 0x73, 0x68, 0x4A, 0x7F, 0xAE, 0x16, 0x25, 0x1D, 0x12, 
	0x25, 0x14, 0x2A, 0xEC, 0x41, 0x69, 0x25, 0xC3, 0x5D, 0xE6, 
	0xAE, 0xE4, 0x59, 0x80, 0x1D, 0xFA, 0xBD, 0x9F, 0x33, 0x36, 
	0x93, 0x9D, 0x88, 0xD6, 0x88, 0xC9, 0x5B, 0x27, 0x7B, 0x0B, 
	0x61, 0x02, 0x81, 0x81, 0x00, 0xDE, 0x01, 0xAB, 0xFA, 0x65, 
	0xD2, 0xFA, 0xD2, 0x6F, 0xFE, 0x3F, 0x57, 0x6D, 0x75, 0x7F, 
	0x8C, 0xE6, 0xBD, 0xFE, 0x08, 0xBD, 0xC7, 0x13, 0x34, 0x62, 
	0x0E, 0x87, 0xB2, 0x7A, 0x2C, 0xA9, 0xCD, 0xCA, 0x93, 0xD8, 
	0x31, 0x91, 0x81, 0x2D, 0xD6, 0x68, 0x96, 0xAA, 0x25, 0xE3, 
	0xB8, 0x7E, 0xA5, 0x98, 0xA8, 0xE8, 0x15, 0x3C, 0xC0, 0xCE, 
	0xDE, 0xF5, 0xAB, 0x80, 0xB1, 0xF5, 0xBA, 0xAF, 0xAC, 0x9C, 
	0xC1, 0xB3, 0x43, 0x34, 0xAE, 0x22, 0xF7, 0x18, 0x41, 0x86, 
	0x63, 0xA2, 0x44, 0x8E, 0x1B, 0x41, 0x9D, 0x2D, 0x75, 0x6F, 
	0x0D, 0x5B, 0x10, 0x19, 0x5D, 0x14, 0xAA, 0x80, 0x1F, 0xEE, 
	0x02, 0x3E, 0xF8, 0xB6, 0xF6, 0xEC, 0x65, 0x8E, 0x38, 0x89, 
	0x0D, 0x0B, 0x50, 0xE4, 0x11, 0x49, 0x86, 0x39, 0x82, 0xDB, 
	0x73, 0xE5, 0x3A, 0x0F, 0x13, 0x22, 0xAB, 0xAD, 0xA0, 0x78, 
	0x9B, 0x94, 0x21, 0x02, 0x81, 0x81, 0x00, 0xFB, 0xCD, 0x4C, 
	0x52, 0x49, 0x3F, 0x2C, 0x80, 0x94, 0x91, 0x4A, 0x38, 0xEC, 
	0x0F, 0x4A, 0x7D, 0x3A, 0x8E, 0xBC, 0x04, 0x90, 0x15, 0x25, 
	0x84, 0xFB, 0xD3, 0x68, 0xBD, 0xEF, 0xA0, 0x47, 0xFE, 0xCE, 
	0x5B, 0xBF, 0x1D, 0x2A, 0x94, 0x27, 0xFC, 0x51, 0x70, 0xFF, 
	0xC9, 0xE9, 0xBA, 0xBE, 0x2B, 0xA0, 0x50, 0x25, 0xD3, 0xE1, 
	0xA1, 0x57, 0x33, 0xCC, 0x5C, 0xC7, 0x7D, 0x09, 0xF6, 0xDC, 
	0xFB, 0x72, 0x94, 0x3D, 0xCA, 0x59, 0x52, 0x73, 0xE0, 0x6C, 
	0x45, 0x0A, 0xD9, 0xDA, 0x30, 0xDF, 0x2B, 0x33, 0xD7, 0x52, 
	0x18, 0x41, 0x01, 0xF0, 0xDF, 0x1B, 0x01, 0xC1, 0xD3, 0xB7, 
	0x9B, 0x26, 0xF8, 0x1C, 0x8F, 0xFF, 0xC8, 0x19, 0xFD, 0x36, 
	0xD0, 0x13, 0xA5, 0x72, 0x42, 0xA3, 0x30, 0x59, 0x57, 0xB4, 
	0xDA, 0x2A, 0x09, 0xE5, 0x45, 0x5A, 0x39, 0x6D, 0x70, 0x22, 
	0x0C, 0xBA, 0x53, 0x26, 0x8D, 0x02, 0x81, 0x81, 0x00, 0xB1, 
	0x3C, 0xC2, 0x70, 0xF0, 0x93, 0xC4, 0x3C, 0xF6, 0xBE, 0x13, 
	0x11, 0x98, 0x48, 0x82, 0xE1, 0x19, 0x61, 0xBB, 0x0A, 0x7D, 
	0x80, 0x0E, 0x3B, 0xF6, 0xC0, 0xC4, 0xE2, 0xDF, 0x19, 0x03, 
	0x23, 0x51, 0x44, 0x41, 0x08, 0x29, 0xB2, 0xE8, 0xC6, 0x50, 
	0xCF, 0x5F, 0xDD, 0x49, 0xF5, 0x03, 0xDE, 0xEE, 0x86, 0x82, 
	0x6A, 0x5A, 0x0B, 0x4F, 0xDC, 0xBE, 0x63, 0x02, 0x26, 0x91, 
	0x18, 0x4E, 0xA1, 0xCE, 0xAF, 0xF1, 0x8E, 0x88, 0xE3, 0x30, 
	0xF4, 0xF5, 0xFF, 0x71, 0xEB, 0xDF, 0x23, 0x3E, 0x14, 0x52, 
	0x88, 0xCA, 0x3F, 0x03, 0xBE, 0xB4, 0xE1, 0xA0, 0x6E, 0x28, 
	0x4E, 0x8A, 0x65, 0x73, 0x5D, 0x85, 0xAA, 0x88, 0x5F, 0x8F, 
	0x90, 0xF0, 0x3F, 0x00, 0x63, 0x52, 0x92, 0x6C, 0xD1, 0xC4, 
	0x52, 0x0D, 0x5E, 0x04, 0x17, 0x7D, 0x7C, 0xA1, 0x86, 0x54, 
	0x5A, 0x9D, 0x0E, 0x0C, 0xDB, 0xA0, 0x21, 0x02, 0x81, 0x81, 
	0x00, 0xEA, 0xFE, 0x1B, 0x9E, 0x27, 0xB1, 0x87, 0x6C, 0xB0, 
	0x3A, 0x2F, 0x94, 0x93, 0xE9, 0x69, 0x51, 0x19, 0x97, 0x1F, 
	0xAC, 0xFA, 0x72, 0x61, 0xC3, 0x8B, 0xE9, 0x2E, 0xB5, 0x23, 
	0xAE, 0xE7, 0xC1, 0xCB, 0x00, 0x20, 0x89, 0xAD, 0xB4, 0xFA, 
	0xE4, 0x25, 0x75, 0x59, 0xA2, 0x2C, 0x39, 0x15, 0x45, 0x4D, 
	0xA5, 0xBE, 0xC7, 0xD0, 0xA8, 0x6B, 0xE3, 0x71, 0x73, 0x9C, 
	0xD0, 0xFA, 0xBD, 0xA2, 0x5A, 0x20, 0x02, 0x6C, 0xF0, 0x2D, 
	0x10, 0x20, 0x08, 0x6F, 0xC2, 0xB7, 0x6F, 0xBC, 0x8B, 0x23, 
	0x9B, 0x04, 0x14, 0x8D, 0x0F, 0x09, 0x8C, 0x30, 0x29, 0x66, 
	0xE0, 0xEA, 0xED, 0x15, 0x4A, 0xFC, 0xC1, 0x4C, 0x96, 0xAE, 
	0xD5, 0x26, 0x3C, 0x04, 0x2D, 0x88, 0x48, 0x3D, 0x2C, 0x27, 
	0x73, 0xF5, 0xCD, 0x3E, 0x80, 0xE3, 0xFE, 0xBC, 0x33, 0x4F, 
	0x12, 0x8D, 0x29, 0xBA, 0xFD, 0x39, 0xDE, 0x63, 0xF9, 0x02, 
	0x81, 0x81, 0x00, 0x8B, 0x1F, 0x47, 0xA2, 0x90, 0x4B, 0x82, 
	0x3B, 0x89, 0x2D, 0xE9, 0x6B, 0xE1, 0x28, 0xE5, 0x22, 0x87, 
	0x83, 0xD0, 0xDE, 0x1E, 0x0D, 0x8C, 0xCC, 0x84, 0x43, 0x3D, 
	0x23, 0x8D, 0x9D, 0x6C, 0xBC, 0xC4, 0xC6, 0xDA, 0x44, 0x44, 
	0x79, 0x20, 0xB6, 0x3E, 0xEF, 0xCF, 0x8A, 0xC4, 0x38, 0xB0, 
	0xE5, 0xDA, 0x45, 0xAC, 0x5A, 0xCC, 0x7B, 0x62, 0xBA, 0xA9, 
	0x73, 0x1F, 0xBA, 0x27, 0x5C, 0x82, 0xF8, 0xAD, 0x31, 0x1E, 
	0xDE, 0xF3, 0x37, 0x72, 0xCB, 0x47, 0xD2, 0xCD, 0xF7, 0xF8, 
	0x7F, 0x00, 0x39, 0xDB, 0x8D, 0x2A, 0xCA, 0x4E, 0xC1, 0xCE, 
	0xE2, 0x15, 0x89, 0xD6, 0x3A, 0x61, 0xAE, 0x9D, 0xA2, 0x30, 
	0xA5, 0x85, 0xAE, 0x38, 0xEA, 0x46, 0x74, 0xDC, 0x02, 0x3A, 
	0xAC, 0xE9, 0x5F, 0xA3, 0xC6, 0x73, 0x4F, 0x73, 0x81, 0x90, 
	0x56, 0xC3, 0xCE, 0x77, 0x5F, 0x5B, 0xBA, 0x6C, 0x42, 0xF1, 
	0x21
};
static const int sizeof_rsa_key_der_2048 = sizeof(rsa_key_der_2048);

/* ./keys/server-key-ecc.der, ECC */
static const unsigned char ecc_key_der_256[] =
{
	0x30, 0x77, 0x02, 0x01, 0x01, 0x04, 0x20, 0x61, 0x09, 0x99, 
	0x0B, 0x79, 0xD2, 0x5F, 0x28, 0x5A, 0x0F, 0x5D, 0x15, 0xCC, 
	0xA1, 0x56, 0x54, 0xF9, 0x2B, 0x39, 0x87, 0x21, 0x2D, 0xA7, 
	0x7D, 0x85, 0x7B, 0xB8, 0x7F, 0x38, 0xC6, 0x6D, 0xD5, 0xA0, 
	0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 
	0x07, 0xA1, 0x44, 0x03, 0x42, 0x00, 0x04, 0x81, 0x13, 0xFF, 
	0xA4, 0x2B, 0xB7, 0x9C, 0x45, 0x74, 0x7A, 0x83, 0x4C, 0x61, 
	0xF3, 0x3F, 0xAD, 0x26, 0xCF, 0x22, 0xCD, 0xA9, 0xA3, 0xBC, 
	0xA5, 0x61, 0xB4, 0x7C, 0xE6, 0x62, 0xD4, 0xC2, 0xF7, 0x55, 
	0x43, 0x9A, 0x31, 0xFB, 0x80, 0x11, 0x20, 0xB5, 0x12, 0x4B, 
	0x24, 0xF5, 0x78, 0xD7, 0xFD, 0x22, 0xEF, 0x46, 0x35, 0xF0, 
	0x05, 0x58, 0x6B, 0x5F, 0x63, 0xC8, 0xDA, 0x1B, 0xC4, 0xF5, 
	0x69
};
static const int sizeof_ecc_key_der_256 = sizeof(ecc_key_der_256);

/* ./keys/server-key-ecc-384.der, ECC */
static const unsigned char ecc_key_der_384[] =
{
	0x30, 0x81, 0xA4, 0x02, 0x01, 0x01, 0x04, 0x30, 0x3E, 0xAD, 
	0xD2, 0xBB, 0xBF, 0x05, 0xA7, 0xBE, 0x3A, 0x3F, 0x7C, 0x28, 
	0x15, 0x12, 0x89, 0xDE, 0x5B, 0xB3, 0x64, 0x4D, 0x70, 0x11, 
	0x76, 0x1D, 0xB5, 0x6F, 0x2A, 0x03, 0x62, 0xFB, 0xA6, 0x4F, 
	0x98, 0xE6, 0x4F, 0xF9, 0x86, 0xDC, 0x4F, 0xB8, 0xEF, 0xDB, 
	0x2D, 0x6B, 0x8D, 0xA5, 0x71, 0x42, 0xA0, 0x07, 0x06, 0x05, 
	0x2B, 0x81, 0x04, 0x00, 0x22, 0xA1, 0x64, 0x03, 0x62, 0x00, 
	0x04, 0x38, 0xD6, 0x2B, 0xE4, 0x18, 0xFF, 0x57, 0x3F, 0xD0, 
	0xE0, 0x20, 0xD4, 0x88, 0x76, 0xC4, 0xE1, 0x12, 0x1D, 0xFB, 
	0x2D, 0x6E, 0xBE, 0xE4, 0x89, 0x5D, 0x77, 0x24, 0x31, 0x6D, 
	0x46, 0xA2, 0x31, 0x05, 0x87, 0x3F, 0x29, 0x86, 0xD5, 0xC7, 
	0x12, 0x80, 0x3A, 0x6F, 0x47, 0x1A, 0xB8, 0x68, 0x50, 0xEB, 
	0x06, 0x3E, 0x10, 0x89, 0x61, 0x34, 0x9C, 0xF8, 0xB4, 0xC6, 
	0xA4, 0xCF, 0x5E, 0x97, 0xBD, 0x7E, 0x51, 0xE9, 0x75, 0xE3, 
	0xE9, 0x21, 0x72, 0x61, 0x50, 0x6E, 0xB9, 0xCF, 0x3C, 0x49, 
	0x3D, 0x3E, 0xB8, 0x8D, 0x46, 0x7B, 0x5F, 0x27, 0xEB, 0xAB, 
	0x21, 0x61, 0xC0, 0x00, 0x66, 0xFE, 0xBD
};
static const int sizeof_ecc_key_der_384 = sizeof(ecc_key_der_384);

/* ./keys/server-key-ecc-521.der, ECC */
static const unsigned char ecc_key_der_521[] =
{
	0x30, 0x81, 0xDC, 0x02, 0x01, 0x01, 0x04, 0x42, 0x00, 0x4C, 
	0xA4, 0xD8, 0x64, 0x28, 0xD9, 0x40, 0x0E, 0x7B, 0x2D, 0xF3, 
	0x91, 0x2E, 0xB9, 0x96, 0xC1, 0x95, 0x89, 0x50, 0x43, 0xAF, 
	0x92, 0xE8, 0x6D, 0xE7, 0x0A, 0xE4, 0xDF, 0x46, 0xF2, 0x2A, 
	0x29, 0x1A, 0x6B, 0xB2, 0x74, 0x8A, 0xAE, 0x82, 0x58, 0x0D, 
	0xF6, 0xC3, 0x9F, 0x49, 0xB3, 0xED, 0x82, 0xF1, 0x78, 0x9E, 
	0xCE, 0x1B, 0x65, 0x7D, 0x45, 0x43, 0x8C, 0xFF, 0x15, 0x65, 
	0x34, 0x35, 0x45, 0x75, 0xA0, 0x07, 0x06, 0x05, 0x2B, 0x81, 
	0x04, 0x00, 0x23, 0xA1, 0x81, 0x89, 0x03, 0x81, 0x86, 0x00, 
	0x04, 0x01, 0xF8, 0xD0, 0xA7, 0xC3, 0xC5, 0x8D, 0x84, 0x19, 
	0x57, 0x96, 0x9F, 0x21, 0x3A, 0x94, 0xF3, 0xDA, 0x55, 0x0E, 
	0xDF, 0x76, 0xD8, 0xDD, 0x17, 0x15, 0x31, 0xF3, 0x5B, 0xB0, 
	0x69, 0xC8, 0xBC, 0x30, 0x0D, 0x6F, 0x6B, 0x37, 0xD1, 0x80, 
	0x46, 0xA9, 0x71, 0x7F, 0x2C, 0x6F, 0x59, 0x51, 0x9C, 0x82, 
	0x70, 0x95, 0xB2, 0x9A, 0x63, 0x13, 0x30, 0x62, 0x18, 0xC2, 
	0x35, 0x76, 0x94, 0x00, 0xD0, 0xF9, 0x6D, 0x00, 0x0A, 0x19, 
	0x3B, 0xA3, 0x46, 0x65, 0x2B, 0xEB, 0x40, 0x9A, 0x9A, 0x45, 
	0xC5, 0x97, 0xA3, 0xED, 0x93, 0x2D, 0xD5, 0xAA, 0xAE, 0x96, 
	0xBF, 0x2F, 0x31, 0x7E, 0x5A, 0x7A, 0xC7, 0x45, 0x8B, 0x3C, 
	0x6C, 0xDB, 0xAA, 0x90, 0xC3, 0x55, 0x38, 0x2C, 0xDF, 0xCD, 
	0xCA, 0x73, 0x77, 0xD9, 0x2E, 0xB2, 0x0A, 0x5E, 0x8C, 0x74, 
	0x23, 0x7C, 0xA5, 0xA3, 0x45, 0xB1, 0x9E, 0x3F, 0x1A, 0x22, 
	0x90, 0xB1, 0x54
};
static const int sizeof_ecc_key_der_521 = sizeof(ecc_key_der_521);

#endif /* NO_FILESYSTEM */

#endif /* WOLFSSL_CERTS_TEST_H */

