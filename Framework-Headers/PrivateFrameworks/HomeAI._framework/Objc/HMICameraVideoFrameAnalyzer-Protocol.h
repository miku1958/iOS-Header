//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/NSObject-Protocol.h>

@class HMICameraVideoFrame, HMICameraVideoFrameResult, NSDictionary;

@protocol HMICameraVideoFrameAnalyzer <NSObject>
+ (NSDictionary *)classHierarchyMap;
- (HMICameraVideoFrameResult *)analyze:(HMICameraVideoFrame *)arg1 targetEventTypes:(long long)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithConfidenceThresholds:(struct NSDictionary *)arg1 nmsThreshold:(double)arg2 error:(id *)arg3;
- (void)preAnalyze:(HMICameraVideoFrame *)arg1;
@end
