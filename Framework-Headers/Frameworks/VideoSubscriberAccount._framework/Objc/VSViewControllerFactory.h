//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VSViewControllerFactory : NSObject
{
}

+ (id)sharedFactory;
- (id)autoAuthenticationViewController;
- (id)credentialEntryViewController;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)loadingViewController;
- (id)viewControllerForAboutPrivacyWithTarget:(id)arg1 action:(SEL)arg2;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(CDUnknownBlockType)arg1;
- (id)viewControlllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceRemoteViewControllerWithCompletion:(CDUnknownBlockType)arg1;

@end

