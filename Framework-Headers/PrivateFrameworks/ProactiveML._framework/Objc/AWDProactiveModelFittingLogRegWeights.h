//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedWeights;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatWeights;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedWeights;
    float _weightsL2norm;
    float _weightsScaleFactor;
    struct {
        unsigned int timestamp:1;
        unsigned int weightsL2norm:1;
        unsigned int weightsScaleFactor:1;
    } _has;
}

@property (strong, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights; // @synthesize denseQuantizedWeights=_denseQuantizedWeights;
@property (strong, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property (readonly, nonatomic) BOOL hasDenseQuantizedWeights;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatWeights;
@property (readonly, nonatomic) BOOL hasSparseQuantizedWeights;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWeightsL2norm;
@property (nonatomic) BOOL hasWeightsScaleFactor;
@property (strong, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property (strong, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property (strong, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights; // @synthesize sparseFloatWeights=_sparseFloatWeights;
@property (strong, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights; // @synthesize sparseQuantizedWeights=_sparseQuantizedWeights;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) float weightsL2norm; // @synthesize weightsL2norm=_weightsL2norm;
@property (nonatomic) float weightsScaleFactor; // @synthesize weightsScaleFactor=_weightsScaleFactor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasWeights;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

