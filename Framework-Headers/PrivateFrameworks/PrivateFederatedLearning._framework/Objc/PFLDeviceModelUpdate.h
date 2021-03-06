//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrivateFederatedLearning/GPBMessage.h>

@class GPBFloatArray, Metrics, NSMutableArray, NSString;

@interface PFLDeviceModelUpdate : GPBMessage
{
}

@property (strong, nonatomic) Metrics *evaluationMetrics; // @dynamic evaluationMetrics;
@property (strong, nonatomic) GPBFloatArray *flattenedPrivatizedWeightDiffsArray; // @dynamic flattenedPrivatizedWeightDiffsArray;
@property (readonly, nonatomic) unsigned long long flattenedPrivatizedWeightDiffsArray_Count; // @dynamic flattenedPrivatizedWeightDiffsArray_Count;
@property (nonatomic) BOOL hasEvaluationMetrics; // @dynamic hasEvaluationMetrics;
@property (nonatomic) int modelVersion; // @dynamic modelVersion;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (nonatomic) int numSamples; // @dynamic numSamples;
@property (strong, nonatomic) NSMutableArray *shapesArray; // @dynamic shapesArray;
@property (readonly, nonatomic) unsigned long long shapesArray_Count; // @dynamic shapesArray_Count;

+ (id)descriptor;

@end

