//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistorySyncOverLimit : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _transactionLogCount;
    struct {
        unsigned int timestamp:1;
        unsigned int transactionLogCount:1;
    } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransactionLogCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int transactionLogCount; // @synthesize transactionLogCount=_transactionLogCount;

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

