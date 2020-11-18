//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>
{
    NSMutableArray *_closedChangeGroups;
    NSString *_currentInstanceIdentifier;
    NSMutableArray *_openChangeGroupDeltas;
    NSData *_remoteRecordData;
}

@property (strong, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property (strong, nonatomic) NSString *currentInstanceIdentifier; // @synthesize currentInstanceIdentifier=_currentInstanceIdentifier;
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (strong, nonatomic) NSMutableArray *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
@property (strong, nonatomic) NSData *remoteRecordData; // @synthesize remoteRecordData=_remoteRecordData;

+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;
- (void)addClosedChangeGroups:(id)arg1;
- (void)addOpenChangeGroupDeltas:(id)arg1;
- (void)clearClosedChangeGroups;
- (void)clearOpenChangeGroupDeltas;
- (id)closedChangeGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)closedChangeGroupsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)openChangeGroupDeltasCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

