//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/_TtC12NewsArticles36NewsletterSubscriptionStatusProvider.h>

#import <NewsArticles/FCNewsletterSubscriptionObserver-Protocol.h>

@interface _TtC12NewsArticles36NewsletterSubscriptionStatusProvider (NewsArticles) <FCNewsletterSubscriptionObserver>

@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;

- (void)addObserver:(id)arg1;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (void)removeObserver:(id)arg1;
@end

