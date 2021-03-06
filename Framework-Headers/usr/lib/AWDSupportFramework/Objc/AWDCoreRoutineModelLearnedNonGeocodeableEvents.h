//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _learnedNongeocodableEvents;
    int _nongeocodableEvents;
    int _unlearnedNongeocodableEvents;
    struct {
        unsigned int timestamp:1;
        unsigned int learnedNongeocodableEvents:1;
        unsigned int nongeocodableEvents:1;
        unsigned int unlearnedNongeocodableEvents:1;
    } _has;
}

@property (nonatomic) BOOL hasLearnedNongeocodableEvents;
@property (nonatomic) BOOL hasNongeocodableEvents;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnlearnedNongeocodableEvents;
@property (nonatomic) int learnedNongeocodableEvents; // @synthesize learnedNongeocodableEvents=_learnedNongeocodableEvents;
@property (nonatomic) int nongeocodableEvents; // @synthesize nongeocodableEvents=_nongeocodableEvents;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int unlearnedNongeocodableEvents; // @synthesize unlearnedNongeocodableEvents=_unlearnedNongeocodableEvents;

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

