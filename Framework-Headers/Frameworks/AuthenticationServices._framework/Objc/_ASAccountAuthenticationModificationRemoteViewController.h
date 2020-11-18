//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <AuthenticationServices/ASAccountAuthenticationModificationRemoteViewControllerProtocol-Protocol.h>

@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate;

@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol>
{
    id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)dismissAccountModificationRemoteViewController;
- (void)presentAccountModificationRemoteViewController;
- (void)requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
