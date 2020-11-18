//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManager : NSObject
{
    VSSubscriptionRegistrationCenter *_registrationCenter;
}

@property (strong, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // @synthesize registrationCenter=_registrationCenter;

- (void).cxx_destruct;
- (id)init;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)arg1;

@end

