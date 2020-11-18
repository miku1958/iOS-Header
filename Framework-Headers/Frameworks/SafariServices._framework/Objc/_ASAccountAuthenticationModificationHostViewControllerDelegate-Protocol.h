//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSDictionary, NSError, _ASAccountAuthenticationModificationHostViewController;

@protocol _ASAccountAuthenticationModificationHostViewControllerDelegate <NSObject>

@optional
- (void)accountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1 didFinishWithCredential:(ASPasswordCredential *)arg2 userInfo:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)accountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1 requestCanceledWithError:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(_ASAccountAuthenticationModificationHostViewController *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)dismissUIForAccountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1;
- (void)presentUIForAccountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1;
@end
