//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class UIViewController, VSIdentityProvider;
@protocol VSIdentityProviderPickerViewController;

@protocol VSIdentityProviderPickerViewControllerDelegate <NSObject>

@optional
- (void)identityProviderPickerViewController:(UIViewController<VSIdentityProviderPickerViewController> *)arg1 didPickIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderPickerViewControllerDidCancel:(UIViewController<VSIdentityProviderPickerViewController> *)arg1;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(UIViewController<VSIdentityProviderPickerViewController> *)arg1;
@end

