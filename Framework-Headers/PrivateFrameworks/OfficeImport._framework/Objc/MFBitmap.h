//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject
{
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}

- (void).cxx_destruct;
- (void)appendDIBPalette:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (unsigned int)coloursUsed:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (id)init;
- (id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)initWithDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (BOOL)isEmpty;
- (BOOL)isFlipped;
- (BOOL)parseHeader:(const char *)arg1 in_headerSize:(unsigned int)arg2;
- (const char *)pixelData;
- (unsigned int)pixelDataOffset:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (BOOL)processDIBHeader:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (void)setMonoPalette:(id)arg1;
- (void)setNull;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (void)writePaletteEntry:(id)arg1 in_index:(int)arg2;

@end
