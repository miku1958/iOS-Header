//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFCARendererImpl : NSObject
{
}

+ (id)_actuallyRenderImage:(struct CGImage *)arg1 requiresBGRA:(BOOL)arg2 downsampleFactor:(double)arg3 layerCustomizer:(CDUnknownBlockType)arg4;
+ (id)luminanceTreatmentFilters;
+ (id)renderMaterialImage:(struct CGImage *)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5;
+ (id)renderTreatedWallpaperImage:(struct CGImage *)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;

@end
