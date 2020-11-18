//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSArray, NSDictionary, NSString, REObserverStore, RERelevanceEngine;

@interface REPredictorManager : NSObject <REPredictorObserver>
{
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resume;

@end

