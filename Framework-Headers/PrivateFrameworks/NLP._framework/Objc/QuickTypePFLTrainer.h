//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject
{
    unsigned long long _batchSize;
    NSNumber *_learningRate;
    unsigned long long _maxSequenceLength;
    NSString *_updatedModelPath;
}

@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (copy, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property (readonly, nonatomic) unsigned long long maxSequenceLength; // @synthesize maxSequenceLength=_maxSequenceLength;
@property (readonly, copy, nonatomic) NSString *updatedModelPath; // @synthesize updatedModelPath=_updatedModelPath;

- (float *)copyWeightUpdates:(unsigned long long *)arg1;
- (id)evaluateOn:(id)arg1;
- (id)initWithSeedModelPath:(id)arg1;
- (void)reset;
- (void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(BOOL)arg3;

@end
