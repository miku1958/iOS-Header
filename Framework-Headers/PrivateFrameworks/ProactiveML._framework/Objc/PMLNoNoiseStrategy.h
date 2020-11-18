//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLNoNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    int maxIterations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int maxIterations; // @synthesize maxIterations;
@property (readonly) Class superclass;

- (void)addNoiseToDenseVector:(id)arg1;
- (void)addNoiseToFeatureMatrix:(id)arg1;
- (void)addNoiseToGradient:(id)arg1;
- (void)addNoiseToObjectiveFeatures:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToWeights:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;

@end

