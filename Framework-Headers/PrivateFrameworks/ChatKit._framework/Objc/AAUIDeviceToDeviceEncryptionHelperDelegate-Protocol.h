//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class AAUIDeviceToDeviceEncryptionHelper;

@protocol AAUIDeviceToDeviceEncryptionHelperDelegate <NSObject>

@optional
- (void)deviceToDeviceEncryptionHelper:(AAUIDeviceToDeviceEncryptionHelper *)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(void (^)(BOOL))arg2;
@end

