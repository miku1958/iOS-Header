//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLinRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelEvaluationTrackerProtocol-Protocol.h>

@class AWDProactiveModelFittingModelInfo, NSString;
@protocol PMLTrackerAdapterProtocol;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    unsigned long long _quantizationNumberOfBuckets;
    id<PMLTrackerAdapterProtocol> _adapter;
}

@property (readonly) id<PMLTrackerAdapterProtocol> adapter; // @synthesize adapter=_adapter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property (readonly) unsigned long long quantizationNumberOfBuckets; // @synthesize quantizationNumberOfBuckets=_quantizationNumberOfBuckets;
@property (readonly) Class superclass;

+ (id)awdTrackerForPlanId:(struct NSString *)arg1;
+ (id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 modelInfo:(id)arg6 numberOfBuckets:(unsigned long long)arg7;
+ (id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(unsigned long long)arg6;
+ (id)parsecTrackerForPlanId:(struct NSString *)arg1;
+ (id)trackerForPlanId:(struct NSString *)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;
- (id)trackPrecisionAtK:(id)arg1;
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;

@end

