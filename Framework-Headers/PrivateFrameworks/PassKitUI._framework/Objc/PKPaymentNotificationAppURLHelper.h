//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentNotificationAppURLHelper : NSObject
{
}

+ (id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 pathSuffix:(id)arg5 usingDeviceAccountNumber:(BOOL)arg6;
+ (id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (id)appURLForTransactionNotification:(id)arg1 excludeTransactionIdentifier:(BOOL)arg2 pass:(id)arg3 pathSuffix:(id)arg4 appLaunchToken:(id)arg5;
+ (id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1;

@end
