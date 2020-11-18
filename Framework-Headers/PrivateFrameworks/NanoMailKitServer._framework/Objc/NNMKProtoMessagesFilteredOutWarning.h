//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_removedMessageIds;
    CDStruct_a125a100 _has;
}

@property (nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (strong, nonatomic) NSMutableArray *removedMessageIds; // @synthesize removedMessageIds=_removedMessageIds;

- (void).cxx_destruct;
- (void)addRemovedMessageId:(id)arg1;
- (void)clearRemovedMessageIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)removedMessageIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)removedMessageIdsCount;
- (void)writeTo:(id)arg1;

@end

