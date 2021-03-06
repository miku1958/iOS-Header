//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryCommCenterMigration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _recordCount;
    unsigned int _version;
    BOOL _success;
    struct {
        unsigned int timestamp:1;
        unsigned int recordCount:1;
        unsigned int version:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) BOOL hasRecordCount;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property (nonatomic) BOOL success; // @synthesize success=_success;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

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

