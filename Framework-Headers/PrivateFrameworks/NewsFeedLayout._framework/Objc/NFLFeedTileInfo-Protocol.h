//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NSCopying-Protocol.h>
#import <NewsFeedLayout/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NFLFeedTileInfo <NSObject, NSCopying>

@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, nonatomic) BOOL bookmarkable;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly, nonatomic) unsigned long long tileInfoType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;

@end

