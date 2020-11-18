//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying>
{
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    struct {
        unsigned int shuffleMode:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *accountInfos; // @synthesize accountInfos=_accountInfos;
@property (strong, nonatomic) NSMutableArray *containers; // @synthesize containers=_containers;
@property (nonatomic) BOOL hasShuffleMode;
@property (readonly, nonatomic) BOOL hasStartingItemIndexPath;
@property (nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property (strong, nonatomic) _MPCProtoTracklistIndexPath *startingItemIndexPath; // @synthesize startingItemIndexPath=_startingItemIndexPath;

+ (Class)accountInfoType;
+ (Class)containerType;
- (void).cxx_destruct;
- (id)accountInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountInfosCount;
- (void)addAccountInfo:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)clearAccountInfos;
- (void)clearContainers;
- (id)containerAtIndex:(unsigned long long)arg1;
- (unsigned long long)containersCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
