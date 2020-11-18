//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAuthenticationViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSIdentityProviderRequestManagerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSLoadingViewControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString, VSIdentityProvider, VSIdentityProviderRequestContext, VSIdentityProviderRequestManager, VSImageLoadOperation, VSViewModel;
@protocol VSIdentityProviderControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderController : NSObject <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, VSLoadingViewControllerDelegate>
{
    BOOL _showsLoadingViewController;
    BOOL _cancellationAllowed;
    BOOL _showingViewController;
    BOOL _didShowViewController;
    BOOL _didShowAuthenticationViewController;
    VSIdentityProvider *_identityProvider;
    id<VSIdentityProviderControllerDelegate> _delegate;
    VSIdentityProviderRequestManager *_requestManager;
    VSIdentityProviderRequestContext *_requestContext;
    NSOperationQueue *_privateQueue;
    VSImageLoadOperation *_logoLoadOperation;
    VSViewModel *_viewModel;
}

@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSIdentityProviderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didShowAuthenticationViewController; // @synthesize didShowAuthenticationViewController=_didShowAuthenticationViewController;
@property (nonatomic) BOOL didShowViewController; // @synthesize didShowViewController=_didShowViewController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property (strong, nonatomic) VSImageLoadOperation *logoLoadOperation; // @synthesize logoLoadOperation=_logoLoadOperation;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (strong, nonatomic) VSIdentityProviderRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (strong, nonatomic) VSIdentityProviderRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property (nonatomic) BOOL showingViewController; // @synthesize showingViewController=_showingViewController;
@property (nonatomic) BOOL showsLoadingViewController; // @synthesize showsLoadingViewController=_showsLoadingViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (id)_authenticationViewControllerWithViewModel:(id)arg1;
- (void)_completeRequestWithResult:(id)arg1;
- (void)_configureAutoAuthenticationViewModel:(id)arg1 forRequest:(id)arg2;
- (void)_configureCredentialEntryViewModel:(id)arg1 forRequest:(id)arg2;
- (void)_configureCuratedViewModel:(id)arg1 forRequest:(id)arg2;
- (void)_configureOnscreenCodeViewModel:(id)arg1 forRequest:(id)arg2;
- (void)_configureViewModel:(id)arg1 forRequest:(id)arg2;
- (void)_didCancel;
- (void)_hideViewController;
- (void)_hideViewControllerIfNecessary;
- (id)_initWithIdentityProvider:(id)arg1;
- (id)_logoLoadOperationForPreferredImageSize:(struct CGSize)arg1;
- (void)_notifyDelegateReplaceViewController:(id)arg1;
- (void)_notifyDelegateShowViewController:(id)arg1;
- (void)_notifyDidAuthenticateAccount:(id)arg1;
- (void)_showAuthenticationViewController:(id)arg1;
- (void)_showLoadingViewController;
- (void)_showViewController:(id)arg1;
- (void)_showViewController:(id)arg1 currentlyShowingViewController:(BOOL)arg2;
- (void)authenticationViewControllerDidCancel:(id)arg1;
- (void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderRequestManager:(id)arg1 hideUserInterfaceForRequest:(id)arg2;
- (void)identityProviderRequestManager:(id)arg1 showUserInterfaceWithViewModel:(id)arg2 forRequest:(id)arg3;
- (id)init;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (void)submitRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

