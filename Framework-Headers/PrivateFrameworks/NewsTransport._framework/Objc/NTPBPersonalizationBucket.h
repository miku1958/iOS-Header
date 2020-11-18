//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBPersonalizationBucket : PBCodable <NSCopying>
{
    long long _maximum;
    long long _minimum;
    long long _treatmentId;
    struct {
        unsigned int maximum:1;
        unsigned int minimum:1;
        unsigned int treatmentId:1;
    } _has;
}

@property (nonatomic) BOOL hasMaximum;
@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) long long maximum; // @synthesize maximum=_maximum;
@property (nonatomic) long long minimum; // @synthesize minimum=_minimum;
@property (nonatomic) long long treatmentId; // @synthesize treatmentId=_treatmentId;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
