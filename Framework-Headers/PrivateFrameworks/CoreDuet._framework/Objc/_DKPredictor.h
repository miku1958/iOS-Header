//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _DKKnowledgeQuerying;

@interface _DKPredictor : NSObject
{
    id<_DKKnowledgeQuerying> _knowledgeStore;
}

@property (strong, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;

+ (id)predictorWithKnowledgeStore:(id)arg1;
- (void).cxx_destruct;
- (id)deviceActivityLikelihood;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)pluginLikelihood;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;

@end
