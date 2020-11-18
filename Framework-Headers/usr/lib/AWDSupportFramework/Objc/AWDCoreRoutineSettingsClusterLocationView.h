//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineSettingsClusterLocationView : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _countInCluster;
    int _deletionCount;
    NSString *_sessionId;
    struct {
        unsigned int timestamp:1;
        unsigned int countInCluster:1;
        unsigned int deletionCount:1;
    } _has;
}

@property (nonatomic) int countInCluster; // @synthesize countInCluster=_countInCluster;
@property (nonatomic) int deletionCount; // @synthesize deletionCount=_deletionCount;
@property (nonatomic) BOOL hasCountInCluster;
@property (nonatomic) BOOL hasDeletionCount;
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
