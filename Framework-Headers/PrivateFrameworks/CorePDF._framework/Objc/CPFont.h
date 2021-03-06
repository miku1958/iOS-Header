//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPFont : NSObject <CPDisposable>
{
    struct CGPDFFont *cgPDFFont;
    struct CGFont *cgFont;
    NSString *fontName;
    BOOL exactMatch;
    CDStruct_05724ab2 descriptor;
    struct __CFDictionary *kernDictionary;
    double kernUnitsPerEm;
    BOOL isHorizontal;
    double defaultWidth;
    BOOL disposed;
}

- (double)ascent;
- (double)avgWidth;
- (double)capHeight;
- (struct CGFont *)cgFont;
- (struct CGPDFFont *)cgPDFFont;
- (void)dealloc;
- (double)descent;
- (void)dispose;
- (void)finalize;
- (unsigned int)flags;
- (struct CGRect)fontBBox;
- (id)fontName;
- (double)fontStretch;
- (double)fontWeight;
- (void)getFontName;
- (BOOL)getGlyphs:(unsigned short *)arg1 forCodes:(const unsigned short *)arg2 count:(unsigned int)arg3;
- (id)initWith:(struct CGPDFDictionary *)arg1;
- (BOOL)isHorizontal;
- (BOOL)isSameFontAs:(id)arg1;
- (double)italicAngle;
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;
- (double)leading;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)arg1;
- (id)matchingFontName;
- (double)maxWidth;
- (double)missingWidth;
- (double)spaceWidth;
- (double)stemH;
- (double)stemV;
- (double)underlinePosition;
- (double)underlineThickness;
- (void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long *)arg2 toArray:(unsigned short *)arg3 maxChars:(unsigned int)arg4;
- (double)xHeight;

@end

