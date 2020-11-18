//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACUIIdentityPickerViewController, NSArray, NSString;

@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
- (NSArray *)copyIdentitiesForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (struct __SecTrust *)copyTrustForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1 identity:(struct __SecIdentity *)arg2;
- (NSArray *)emailAddressesForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (void)identityPickerController:(ACUIIdentityPickerViewController *)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(struct __SecIdentity *)arg3;
- (BOOL)isPropertyEnabledForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (NSString *)localizedSwitchNameForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (struct __SecIdentity *)selectedIdentityForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;

@optional
- (BOOL)allowEditingForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
- (unsigned long long)configurationOptionsForIdentityPickerController:(ACUIIdentityPickerViewController *)arg1;
@end

