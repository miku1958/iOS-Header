//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/_TtC7NewsUI233FollowingNotificationsDataManager.h>

#import <NewsUI2/FCNewsletterSubscriptionObserver-Protocol.h>
#import <NewsUI2/FCUserInfoObserving-Protocol.h>

@interface _TtC7NewsUI233FollowingNotificationsDataManager (NewsUI2) <FCUserInfoObserving, FCNewsletterSubscriptionObserver>
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
@end

