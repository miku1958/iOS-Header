//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DChartPlatformSettings : NSObject
{
    NSDictionary *mSettings;
}

+ (id)p_defaultSettingsDictionary;
+ (id)p_platformSettingsDictionary;
+ (id)sharedInstance;
- (double)backgroundLayoutContentsScaleFactor;
- (BOOL)backgroundLayoutUsesTiledRendering;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (BOOL)buildImageDefaultAntialias;
- (unsigned long long)buildImageTileSize;
- (unsigned long long)buildMultisamples;
- (BOOL)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (BOOL)buildTextureRendersAsSingleImage;
- (BOOL)buildsCanUseDynamicShadows;
- (BOOL)buildsUseLowDetailedGeometries;
- (void)dealloc;
- (id)description;
- (unsigned long long)highQualityShadowsSize;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)insertionIconSupersamplingSamples;
- (BOOL)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (BOOL)interactiveModeUsesFastPerformanceHint;
- (BOOL)knobTrackingUsesRealTimePerformanceHint;
- (unsigned long long)labelMaxTextureSize;
- (float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(const tvec2_3b141483 *)arg2;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (float)prefilteredLinesFilterRadius;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (BOOL)protectCachedShaders;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (float)rotationTrackerSpeed;
- (BOOL)shouldHandleResourceCacheOutOfMemory;
- (BOOL)skipFirstMipmapLevel;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)supersamplingTileSize;
- (BOOL)useHighQualityShadows;
- (BOOL)useInteractiveModeWhileSelected;
- (BOOL)useLayoutInwardForInsertionIcons;
- (BOOL)useTiledFullSizeInteractiveLayer;

@end

