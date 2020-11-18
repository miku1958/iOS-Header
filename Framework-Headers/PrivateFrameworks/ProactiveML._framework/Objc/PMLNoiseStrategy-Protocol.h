//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLDenseMatrix, PMLModelWeights, PMLMutableDenseVector, PMLSparseMatrix, PMLSparseVector;

@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>

@property int maxIterations;

- (void)addNoiseToDenseVector:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToFeatureMatrix:(PMLDenseMatrix *)arg1;
- (void)addNoiseToGradient:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToObjectiveFeatures:(PMLMutableDenseVector *)arg1;
- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
- (void)addNoiseToWeights:(PMLModelWeights *)arg1;
@end
