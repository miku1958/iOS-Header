//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSXDMessage;

@protocol AMSDeviceMessengerServiceInterface <NSObject>
- (void)getMessagesWithPurpose:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)sendMessage:(AMSXDMessage *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
