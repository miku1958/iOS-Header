//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class ASPasswordCredential, _ASCredentialProviderExtensionViewController;

@protocol _ASCredentialProviderExtensionViewControllerDelegate <NSObject>

@optional
- (void)credentialProviderExtensionViewController:(_ASCredentialProviderExtensionViewController *)arg1 didFinishWithCredential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end

