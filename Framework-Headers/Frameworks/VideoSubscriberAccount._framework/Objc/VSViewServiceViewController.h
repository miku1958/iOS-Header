//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccount/VSIdentityProviderControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSViewServiceProtocol-Protocol.h>

@class NSOperationQueue, NSString, NSUUID, VSAccountStore, VSIdentityProviderController, VSRemoteNotifier, VSViewServiceRequest;

__attribute__((visibility("hidden")))
@interface VSViewServiceViewController : UIViewController <VSViewServiceProtocol, VSIdentityProviderControllerDelegate, VSIdentityProviderPickerViewControllerDelegate, VSRemoteNotifierDelegate>
{
    BOOL _presentedInHost;
    BOOL _identityProviderPickerRequired;
    BOOL _didAuthenticateAccount;
    VSAccountStore *_accountStore;
    VSRemoteNotifier *_remoteNotifier;
    NSOperationQueue *_privateQueue;
    VSViewServiceRequest *_currentRequest;
    NSUUID *_currentRequestID;
    VSIdentityProviderController *_identityProviderController;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (copy, nonatomic) VSViewServiceRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property (copy, nonatomic) NSUUID *currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAuthenticateAccount; // @synthesize didAuthenticateAccount=_didAuthenticateAccount;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSIdentityProviderController *identityProviderController; // @synthesize identityProviderController=_identityProviderController;
@property (nonatomic, getter=isIdentityProviderPickerRequired) BOOL identityProviderPickerRequired; // @synthesize identityProviderPickerRequired=_identityProviderPickerRequired;
@property (nonatomic, getter=isPresentedInHost) BOOL presentedInHost; // @synthesize presentedInHost=_presentedInHost;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (strong, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (id)_account;
- (void)_completeRequest:(id)arg1 withResponse:(id)arg2;
- (void)_completeRequestWithResponse:(id)arg1;
- (void)_completeRequestWithResponse:(id)arg1 fromIdentityProvider:(id)arg2;
- (void)_didCancelRequest;
- (void)_dismissInHostIfNecessary;
- (id)_identityProviderRequestForViewServiceRequest:(id)arg1;
- (void)_perfomShowViewControllerRequest:(id)arg1;
- (void)_performOperation:(unsigned long long)arg1 withViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_performRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)_performRequestInternal:(id)arg1 withID:(id)arg2 identityProviders:(id)arg3;
- (void)_performRequestWithIdentityProvider:(id)arg1;
- (void)_popToRootViewController;
- (void)_presentError:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentInHostIfNecessary;
- (void)_presentViewController:(id)arg1;
- (void)_presentWelcomeMessageForIdentityProvider:(id)arg1 withLogoCacheURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_pushViewController:(id)arg1;
- (void)_replaceLastViewControllerWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_requestDidFailWithError:(id)arg1;
- (void)_rootViewControllerDidAppear;
- (void)_setViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)_viewControllerHost;
- (void)_viewControllerWasDismissed;
- (id)_viewServiceResponseWithIdentityProviderResponse:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)identityProviderController:(id)arg1 didAuthenticateAccount:(id)arg2;
- (void)identityProviderController:(id)arg1 replaceViewControllerWithViewController:(id)arg2;
- (void)identityProviderController:(id)arg1 showViewController:(id)arg2;
- (void)identityProviderControllerHideViewController:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderPickerViewControllerDidCancel:(id)arg1;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;

@end

