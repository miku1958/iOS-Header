//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@interface HealthUIAWDHealthUIOrganDonationErrorEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _errorType;
    struct {
        unsigned int timestamp:1;
        unsigned int errorType:1;
    } _has;
}

@property (nonatomic) int errorType; // @synthesize errorType=_errorType;
@property (nonatomic) BOOL hasErrorType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsErrorType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

