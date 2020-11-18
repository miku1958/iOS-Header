//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying>
{
    NSString *_activeTreatments;
    unsigned int _bucket;
    int _domain;
    unsigned int _evaluatedCount;
    int _feedbackType;
    unsigned int _k;
    struct {
        unsigned int bucket:1;
        unsigned int domain:1;
        unsigned int evaluatedCount:1;
        unsigned int feedbackType:1;
        unsigned int k:1;
    } _has;
}

@property (strong, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property (nonatomic) unsigned int bucket; // @synthesize bucket=_bucket;
@property (nonatomic) int domain; // @synthesize domain=_domain;
@property (nonatomic) unsigned int evaluatedCount; // @synthesize evaluatedCount=_evaluatedCount;
@property (nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k; // @synthesize k=_k;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (int)StringAsFeedbackType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainAsString:(int)arg1;
- (id)feedbackTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
