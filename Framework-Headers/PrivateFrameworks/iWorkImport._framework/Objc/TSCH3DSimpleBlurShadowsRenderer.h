//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DShadowsRenderer-Protocol.h>

@class NSArray, TSCH3DFBOResource;

__attribute__((visibility("hidden")))
@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>
{
    TSCH3DFBOResource *mShadowsFBOResource;
    TSCH3DFBOResource *mBlurFBOResource;
    tvec2_3b141483 mShadowsSize;
    NSArray *mBlurParametersArray;
}

- (id).cxx_construct;
- (void)blurParametersFromQuality:(float)arg1 shadowSize:(long long *)arg2 numPasses:(long long *)arg3 kernelScale:(float *)arg4;
- (float)blurSlackForQuality:(float)arg1;
- (void)dealloc;
- (id)initWithBlurParametersArray:(id)arg1;
- (void)invalidate;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (id)shadowsFBOForContext:(id)arg1;
- (void)unprotectShadowInSession:(id)arg1;

@end

