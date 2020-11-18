//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _deleteType;
    NSMutableArray *_groups;
    BOOL _syncEnabled;
    struct {
        unsigned int timestamp:1;
        unsigned int deleteType:1;
        unsigned int syncEnabled:1;
    } _has;
}

@property (nonatomic) unsigned int deleteType; // @synthesize deleteType=_deleteType;
@property (strong, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property (nonatomic) BOOL hasDeleteType;
@property (nonatomic) BOOL hasSyncEnabled;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)groupsType;
- (void)addGroups:(id)arg1;
- (void)clearGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

