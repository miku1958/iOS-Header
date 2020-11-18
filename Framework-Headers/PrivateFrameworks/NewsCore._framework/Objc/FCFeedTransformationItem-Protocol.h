//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedPersonalizingItem-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) unsigned long long order;
@property (readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, nonatomic) long long publisherArticleVersion;
@property (readonly, copy, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;


@optional
@end
