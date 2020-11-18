//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _featuresL2norm;
    float _featuresScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedFeatures;
    struct {
        unsigned int timestamp:1;
        unsigned int featuresL2norm:1;
        unsigned int featuresScaleFactor:1;
    } _has;
}

@property (nonatomic) float featuresL2norm; // @synthesize featuresL2norm=_featuresL2norm;
@property (nonatomic) float featuresScaleFactor; // @synthesize featuresScaleFactor=_featuresScaleFactor;
@property (nonatomic) BOOL hasFeaturesL2norm;
@property (nonatomic) BOOL hasFeaturesScaleFactor;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property (readonly, nonatomic) BOOL hasSparseQuantizedFeatures;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property (strong, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property (strong, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // @synthesize sparseFloatFeatures=_sparseFloatFeatures;
@property (strong, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures; // @synthesize sparseQuantizedFeatures=_sparseQuantizedFeatures;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featuresLength;
- (float)featuresValueAtIndex:(unsigned long long)arg1;
- (BOOL)hasObjectiveFeatures;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

