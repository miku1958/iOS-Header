//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@interface PPPBFeedbackItem : PBCodable <NSCopying>
{
    int _feedbackType;
    float _mappingWeight;
    struct {
        unsigned int feedbackType:1;
        unsigned int mappingWeight:1;
    } _has;
}

@property (nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasMappingWeight;
@property (nonatomic) float mappingWeight; // @synthesize mappingWeight=_mappingWeight;

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
