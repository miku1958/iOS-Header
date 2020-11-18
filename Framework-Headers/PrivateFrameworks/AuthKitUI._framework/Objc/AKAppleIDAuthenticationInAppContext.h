//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import <AuthKitUI/AKAppleIDAuthenticationUIProvider-Protocol.h>
#import <AuthKitUI/AKBasicLoginAlertControllerDelegate-Protocol.h>
#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUICDPStingrayRemoteUIController, AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, AKBasicLoginAlertController, NSHTTPURLResponse, NSString, RUIObjectModel, RemoteUIController, UINavigationController, UIViewController;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextDelegate;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKBasicLoginAlertControllerDelegate, AKAppleIDAuthenticationUIProvider, RemoteUIControllerDelegate>
{
    UIViewController *_topViewControllerOnLoadStart;
    BOOL _overrideFirstActionSignal;
    AKBasicLoginAlertController *_basicLoginViewController;
    UINavigationController *_navController;
    UINavigationController *_modalRemoteUINavController;
    RemoteUIController *_remoteUIController;
    CDUnknownBlockType _serverUICompletion;
    AKAppleIDServerResourceLoadDelegate *_serverUIDelegate;
    AKAppleIDServerUIDataHarvester *_serverUIHelper;
    RUIObjectModel *_currentRemoteOM;
    NSHTTPURLResponse *_latestReadResponse;
    NSHTTPURLResponse *_deferredResponse;
    BOOL _isPresentingServerUI;
    AAUICDPStingrayRemoteUIController *_stingrayController;
    BOOL _forceInlinePresentation;
    UIViewController *_presentingViewController;
    id<AKAppleIDAuthenticationInAppContextDelegate> _delegate;
    id<AKAppleIDAuthenticationInAppContextAlertDelegate> _alertDelegate;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation; // @synthesize forceInlinePresentation=_forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertValidPresentingViewController;
- (void)_cleanUpBasicLogin;
- (void)_cleanUpBasicLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)_completeWithFinalResponse:(id)arg1;
- (void)_handleBackButtonTap:(id)arg1;
- (BOOL)_isDeferrableFinalResponseHarvested;
- (id)_navController;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_remoteUIController;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (id)cdpUiProvider;
- (void)completeWithError:(id)arg1;
- (void)dealloc;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (id)remoteUIStyle;
- (id)serverDataHarvester;
- (void)willPresentModalNavigationController:(id)arg1;

@end

