//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UNNotificationRequest;

@protocol AFUserNotificationService
- (void)postNotificationRequest:(UNNotificationRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)withdrawNotificationRequestWithIdentifier:(NSString *)arg1;
@end
