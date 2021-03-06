//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSSet, NSString;
@protocol FCBundleSubscriptionProviderType;

@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying>
{
    NSString *_topStoriesChannelID;
    NSSet *_hiddenFeedIDs;
    NSString *_paidBundleFeedID;
    NSSet *_mutedTagIDs;
    NSSet *_purchasedTagIDs;
    NSSet *_subscribedTagIDs;
    id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
    long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    long long _fetchingBin;
    NSString *_throttlingIdentifier;
    double _minimumUpdateInterval;
}

@property (readonly, copy, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; // @synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider;
@property (readonly, nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property (readonly, nonatomic) long long fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property (readonly, nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property (readonly, copy, nonatomic) NSSet *hiddenFeedIDs; // @synthesize hiddenFeedIDs=_hiddenFeedIDs;
@property (readonly, nonatomic) double minimumUpdateInterval; // @synthesize minimumUpdateInterval=_minimumUpdateInterval;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs; // @synthesize mutedTagIDs=_mutedTagIDs;
@property (readonly, copy, nonatomic) NSString *paidBundleFeedID; // @synthesize paidBundleFeedID=_paidBundleFeedID;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs; // @synthesize purchasedTagIDs=_purchasedTagIDs;
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property (readonly, copy, nonatomic) NSString *throttlingIdentifier; // @synthesize throttlingIdentifier=_throttlingIdentifier;
@property (readonly, copy, nonatomic) NSString *topStoriesChannelID; // @synthesize topStoriesChannelID=_topStoriesChannelID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithForYouTodaySectionSpecificConfig:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9 throttlingIdentifier:(id)arg10;

@end

