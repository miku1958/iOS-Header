//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialMessagesSyncs;
    CDStruct_a125a100 _has;
}

@property (nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (strong, nonatomic) NSMutableArray *initialMessagesSyncs; // @synthesize initialMessagesSyncs=_initialMessagesSyncs;

+ (Class)initialMessagesSyncType;
- (void).cxx_destruct;
- (void)addInitialMessagesSync:(id)arg1;
- (void)clearInitialMessagesSyncs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initialMessagesSyncAtIndex:(unsigned long long)arg1;
- (unsigned long long)initialMessagesSyncsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

