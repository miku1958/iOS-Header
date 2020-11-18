//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo>
{
    NSString *_identifier;
    unsigned long long _tileInfoType;
    NSString *_groupIdentifier;
    NSArray *_underlyingTileInfos;
}

@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, nonatomic) BOOL bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long tileInfoType; // @synthesize tileInfoType=_tileInfoType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;
@property (readonly, copy, nonatomic) NSArray *underlyingTileInfos; // @synthesize underlyingTileInfos=_underlyingTileInfos;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithGroupIdentifier:(id)arg1 underlyingTileInfos:(id)arg2;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingTileInfos:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)underlyingTileInfoForID:(id)arg1;
- (BOOL)underlyingTileInfosContainsTileInfoForID:(id)arg1;

@end

