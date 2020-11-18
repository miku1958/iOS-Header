//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartShadowsBlurParameters : NSObject
{
    float mQuality;
    long long mNumPasses;
    long long mShadowSize;
    float mKernelScale;
}

@property (nonatomic) float kernelScale; // @synthesize kernelScale=mKernelScale;
@property (nonatomic) long long numPasses; // @synthesize numPasses=mNumPasses;
@property (nonatomic) float quality; // @synthesize quality=mQuality;
@property (nonatomic) long long shadowSize; // @synthesize shadowSize=mShadowSize;

+ (id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;
- (id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;

@end

