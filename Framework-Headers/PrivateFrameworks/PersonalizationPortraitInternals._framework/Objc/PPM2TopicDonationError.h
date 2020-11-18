//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_activeTreatments;
    int _reason;
    int _source;
    struct {
        unsigned int code:1;
        unsigned int reason:1;
        unsigned int source:1;
    } _has;
}

@property (strong, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property (nonatomic) long long code; // @synthesize code=_code;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) int source; // @synthesize source=_source;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
