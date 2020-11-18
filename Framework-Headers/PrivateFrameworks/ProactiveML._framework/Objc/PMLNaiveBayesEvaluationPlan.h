//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLEvaluationTrackerProtocol;

@interface PMLNaiveBayesEvaluationPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id<PMLEvaluationTrackerProtocol> _tracker;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    PMLModelWeights *_currentModelWeights;
    PMLModelWeights *_probabilities;
    PMLModelWeights *_positiveConditionalProbabilities;
    PMLModelWeights *_negativeConditionalProbabilities;
    double _skew;
    BOOL _isMultiLabel;
    unsigned long long _positiveLabel;
    double _threshold;
    unsigned long long _evaluationLevel;
    BOOL _isSynchronous;
    struct NSString *_planId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property (readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property (readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property (readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PMLEvaluationTrackerProtocol> tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString *)arg3 isSynchronous:(BOOL)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 probabilities:(id)arg7 positiveConditionalProbabilities:(id)arg8 negativeConditionalProbabilities:(id)arg9 skew:(double)arg10 threshold:(double)arg11 isMultiLabel:(BOOL)arg12 positiveLabel:(unsigned long long)arg13 evaluationLevel:(unsigned long long)arg14;
- (void)loadSessionsSince:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)normalizeRegressor:(id)arg1;
- (id)run;
- (void)runUntilDoneForTesting;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(BOOL *)arg2;
- (id)toPlistWithChunks:(id)arg1;

@end

