//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLSubscriptionPlacardTileInfo : NSObject <NFLFeedTileInfo>
{
}

@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long tileInfoType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;

@end

