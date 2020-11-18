//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class ASCredentialServiceIdentifier, ASPasswordCredential;

@protocol SFPasswordRemoteViewControllerProtocol <NSObject>
- (void)willDismissServiceViewController;

@optional
- (void)performUpgradeToSignInWithAppleForCredential:(ASPasswordCredential *)arg1 serviceIdentifier:(ASCredentialServiceIdentifier *)arg2;
- (void)performUpgradeToStrongPasswordForCredential:(ASPasswordCredential *)arg1 serviceIdentifier:(ASCredentialServiceIdentifier *)arg2;
@end
