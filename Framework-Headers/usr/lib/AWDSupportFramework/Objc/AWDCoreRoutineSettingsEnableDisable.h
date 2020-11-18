//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineSettingsEnableDisable : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _enabled;
    NSString *_sessionId;
    CDStruct_93f1cf87 _has;
}

@property (nonatomic) int enabled; // @synthesize enabled=_enabled;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
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

