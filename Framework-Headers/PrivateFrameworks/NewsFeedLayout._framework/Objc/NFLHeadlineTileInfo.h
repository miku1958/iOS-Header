//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;
@protocol FCHeadlineProviding;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo>
{
    id<FCHeadlineProviding> _headline;
    NSString *_groupIdentifier;
    NSString *_namespacedIdentifier;
}

@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, nonatomic) BOOL bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) id<FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *namespacedIdentifier; // @synthesize namespacedIdentifier=_namespacedIdentifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long tileInfoType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
