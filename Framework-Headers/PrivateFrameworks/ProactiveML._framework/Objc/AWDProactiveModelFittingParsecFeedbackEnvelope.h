//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingLinRegObjectiveFeatures, AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLogRegWeights;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>
{
    AWDProactiveModelFittingEvaluation *_evaluation;
    AWDProactiveModelFittingLinRegFeatureMatrix *_linRegFeatureMatrix;
    AWDProactiveModelFittingLinRegObjectiveFeatures *_linRegObjectiveFeatures;
    AWDProactiveModelFittingLogRegGradient *_logRegGradient;
    AWDProactiveModelFittingLogRegWeights *_logRegWeights;
}

@property (strong, nonatomic) AWDProactiveModelFittingEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property (readonly, nonatomic) BOOL hasEvaluation;
@property (readonly, nonatomic) BOOL hasLinRegFeatureMatrix;
@property (readonly, nonatomic) BOOL hasLinRegObjectiveFeatures;
@property (readonly, nonatomic) BOOL hasLogRegGradient;
@property (readonly, nonatomic) BOOL hasLogRegWeights;
@property (strong, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix; // @synthesize linRegFeatureMatrix=_linRegFeatureMatrix;
@property (strong, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures; // @synthesize linRegObjectiveFeatures=_linRegObjectiveFeatures;
@property (strong, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient; // @synthesize logRegGradient=_logRegGradient;
@property (strong, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights; // @synthesize logRegWeights=_logRegWeights;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
