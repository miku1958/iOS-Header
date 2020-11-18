//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSMutableArray, _CSIRenditionBlockData;

__attribute__((visibility("hidden")))
@interface _CUIThemePixelRendition : CUIThemeRendition
{
    unsigned int _nimages;
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    _CSIRenditionBlockData *_cachedBlockDataGray;
    unsigned long long _sourceRowbytes;
    NSMutableArray *_layers;
    struct CGSize _unslicedSize;
}

- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (void)dealloc;
- (BOOL)edgesOnly;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)layerReferences;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (int)pixelFormat;
- (void)setSharedBlockData:(id)arg1;
- (id)sliceInformation;
- (unsigned long long)sourceRowbytes;
- (struct CGImage *)unslicedImage;
- (struct CGSize)unslicedSize;

@end
