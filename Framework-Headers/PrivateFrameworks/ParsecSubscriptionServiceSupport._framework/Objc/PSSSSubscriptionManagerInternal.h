//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSSSSubscriptionManagerInternal : NSObject
{
}

+ (void)initialize;
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)arg1 domainIdentifiers:(id)arg2 maximumExpirationLimit:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 expirationDate:(id)arg3;
- (void)removeSubscriptionServiceForURL:(id)arg1;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(id)arg1;

@end
