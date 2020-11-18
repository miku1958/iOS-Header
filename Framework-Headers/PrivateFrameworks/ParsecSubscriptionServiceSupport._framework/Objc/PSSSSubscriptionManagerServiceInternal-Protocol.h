//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString, NSURL;

@protocol PSSSSubscriptionManagerServiceInternal
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(NSArray *)arg1 domainIdentifiers:(NSArray *)arg2 maximumExpirationLimit:(double)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)registerSubscriptionServiceForURL:(NSURL *)arg1 withSubscriptionInfo:(NSString *)arg2 expirationDate:(NSDate *)arg3;
- (void)removeSubscriptionServiceForURL:(NSURL *)arg1;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(NSDate *)arg1;
@end

