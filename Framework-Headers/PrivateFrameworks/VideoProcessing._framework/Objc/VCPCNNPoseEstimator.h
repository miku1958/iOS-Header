//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNPoseEstimator : NSObject
{
}

+ (id)estimator;
- (int)computePoseScore:(float *)arg1;
- (int)detectPoseForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 yaw:(long long *)arg3;
- (float *)getInputBuffer;

@end

