//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUUserNotificationsProviderXPCServer <NSObject>
- (oneway void)momentCapturedForStreamToken:(long long)arg1 requesterID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
@end
