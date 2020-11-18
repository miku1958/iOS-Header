//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPMultiverseIdentifier, MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying>
{
    long long _storeId;
    NSMutableArray *_childIdentifiers;
    NSString *_cloudGlobalId;
    int _distinguishedKind;
    MIPMultiverseIdentifier *_geniusSeedTrackIdentifier;
    NSMutableArray *_items;
    NSString *_name;
    MIPMultiverseIdentifier *_parentIdentifier;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _sortType;
    int _type;
    BOOL _cloudIsCuratorPlaylist;
    BOOL _cloudIsSubscribed;
    BOOL _hidden;
    BOOL _reversedSorting;
    struct {
        unsigned int storeId:1;
        unsigned int distinguishedKind:1;
        unsigned int sortType:1;
        unsigned int type:1;
        unsigned int cloudIsCuratorPlaylist:1;
        unsigned int cloudIsSubscribed:1;
        unsigned int hidden:1;
        unsigned int reversedSorting:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *childIdentifiers; // @synthesize childIdentifiers=_childIdentifiers;
@property (strong, nonatomic) NSString *cloudGlobalId; // @synthesize cloudGlobalId=_cloudGlobalId;
@property (nonatomic) BOOL cloudIsCuratorPlaylist; // @synthesize cloudIsCuratorPlaylist=_cloudIsCuratorPlaylist;
@property (nonatomic) BOOL cloudIsSubscribed; // @synthesize cloudIsSubscribed=_cloudIsSubscribed;
@property (nonatomic) int distinguishedKind; // @synthesize distinguishedKind=_distinguishedKind;
@property (strong, nonatomic) MIPMultiverseIdentifier *geniusSeedTrackIdentifier; // @synthesize geniusSeedTrackIdentifier=_geniusSeedTrackIdentifier;
@property (readonly, nonatomic) BOOL hasCloudGlobalId;
@property (nonatomic) BOOL hasCloudIsCuratorPlaylist;
@property (nonatomic) BOOL hasCloudIsSubscribed;
@property (nonatomic) BOOL hasDistinguishedKind;
@property (readonly, nonatomic) BOOL hasGeniusSeedTrackIdentifier;
@property (nonatomic) BOOL hasHidden;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasReversedSorting;
@property (readonly, nonatomic) BOOL hasSmartPlaylistInfo;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) MIPMultiverseIdentifier *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property (nonatomic) BOOL reversedSorting; // @synthesize reversedSorting=_reversedSorting;
@property (strong, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo; // @synthesize smartPlaylistInfo=_smartPlaylistInfo;
@property (nonatomic) int sortType; // @synthesize sortType=_sortType;
@property (nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addChildIdentifiers:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)childIdentifiersCount;
- (void)clearChildIdentifiers;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
