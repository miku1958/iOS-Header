//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator
{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)arg1;
- (void).cxx_destruct;
- (int)computePoseScore:(float *)arg1;
- (void)dealloc;
- (float *)getInputBuffer;
- (id)init;

@end

