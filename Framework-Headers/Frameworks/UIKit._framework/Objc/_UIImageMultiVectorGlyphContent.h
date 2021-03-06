//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent : _UIImageContent
{
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize _sizeInPixels;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
- (BOOL)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (BOOL)canProvideCGImage;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (id)initWithScale:(double)arg1;
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;
- (BOOL)isCGImage;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVectorGlyph;
- (struct CGSize)sizeInPixels;
- (double)vectorScale;

@end

