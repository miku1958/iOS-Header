//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup
{
    double _pointSize;
    double _lookedupScaleFactor;
    struct CGImage *_cgImageRef;
    double _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    unsigned int _generatedImage:1;
}

@property (readonly, nonatomic) struct CGRect alignmentRect;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) struct CGRect contentBounds;
@property (nonatomic) double fontMatchingScaleFactor;
@property (readonly, nonatomic) BOOL isFlippable;

- (void).cxx_destruct;
- (double)_requestedPointSizeRatio;
- (void)dealloc;
- (BOOL)generatedImage;
- (long long)glyphSize;
- (long long)glyphWeight;
- (struct CGImage *)image;
- (id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7;
- (id)knownAvailableVectorSizes;
- (double)pointSize;
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;
- (struct CGSVGDocument *)referenceGlyph;
- (double)referencePointSize;
- (double)scale;

@end
