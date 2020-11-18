//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying>
{
    unsigned long long _iteration;
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedGradient;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    float _gradientL2norm;
    float _gradientScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatGradient;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedGradient;
    struct {
        unsigned int iteration:1;
        unsigned int timestamp:1;
        unsigned int gradientL2norm:1;
        unsigned int gradientScaleFactor:1;
    } _has;
}

@property (strong, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient; // @synthesize denseQuantizedGradient=_denseQuantizedGradient;
@property (strong, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property (nonatomic) float gradientL2norm; // @synthesize gradientL2norm=_gradientL2norm;
@property (nonatomic) float gradientScaleFactor; // @synthesize gradientScaleFactor=_gradientScaleFactor;
@property (readonly, nonatomic) BOOL hasDenseQuantizedGradient;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (nonatomic) BOOL hasGradientL2norm;
@property (nonatomic) BOOL hasGradientScaleFactor;
@property (nonatomic) BOOL hasIteration;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatGradient;
@property (readonly, nonatomic) BOOL hasSparseQuantizedGradient;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long iteration; // @synthesize iteration=_iteration;
@property (strong, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property (strong, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property (strong, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient; // @synthesize sparseFloatGradient=_sparseFloatGradient;
@property (strong, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient; // @synthesize sparseQuantizedGradient=_sparseQuantizedGradient;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)arg1;
- (BOOL)hasGradient;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

