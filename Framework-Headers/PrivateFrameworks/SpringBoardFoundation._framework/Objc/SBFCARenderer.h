//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SBFCARenderer : NSObject
{
    NSXPCConnection *_rendererServiceConnection;
}

+ (id)sharedInstance;
+ (BOOL)shouldUseXPCServiceForRendering;
- (void).cxx_destruct;
- (void)_createConnection;
- (id)_remoteObjectProxy;
- (id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5;
- (id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;
- (void)warmup;

@end

