//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCompanionSyncErrorEvent : PBCodable <NSCopying>
{
    unsigned long long _sequenceNumber;
    unsigned long long _timestamp;
    int _error;
    NSString *_service;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
        unsigned int error:1;
    } _has;
}

@property (nonatomic) int error; // @synthesize error=_error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasService;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) NSString *service; // @synthesize service=_service;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
