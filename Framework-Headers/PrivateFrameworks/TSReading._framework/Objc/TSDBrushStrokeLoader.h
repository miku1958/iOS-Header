//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSDBrushStrokeLoader : NSObject
{
    NSMutableDictionary *_lineEnds;
    NSMutableDictionary *_images;
    NSMutableDictionary *_textureIndex;
    NSMutableDictionary *_options;
    NSMutableDictionary *_paths;
    NSMutableDictionary *_bounds;
}

+ (id)brushStrokeLoaderForCurrentThread;
+ (double)p_brushPixelScaleAt100Percent;
+ (id)p_brushStrokeLoadQueue;
+ (id)p_cacheDirectory;
- (void).cxx_destruct;
- (id)boundsForStroke:(id)arg1;
- (id)imageForStroke:(id)arg1;
- (id)lineEnd:(id)arg1 forStroke:(id)arg2;
- (id)optionsForStroke:(id)arg1;
- (void)p_loadBrushIfNeeded:(id)arg1;
- (id)p_loadImageForBrush:(id)arg1;
- (void)p_loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(const struct CGPath *)arg3 andBounds:(struct CGRect)arg4;
- (void)p_loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
- (void)p_loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
- (id)pathsForStroke:(id)arg1;
- (id)textureIndexForStroke:(id)arg1;

@end

