//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/RUIObjectModelDelegate-Protocol.h>

@class AAGrandSlamSigner, AASetupAssistantService, ACAccount, FARequestConfigurator, NSArray, NSHTTPURLResponse, NSMutableArray, NSString, NSURL, RUILoader, UIActivityIndicatorView, UIBarButtonItem, UINavigationController, UINavigationItem, UIToolbar;
@protocol FAChildAccountCreationDelegate;

@interface FAChildAccountCreationController : NSObject <RUIObjectModelDelegate>
{
    AASetupAssistantService *_setupService;
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    CDUnknownBlockType _loaderCompletion;
    NSHTTPURLResponse *_currentResponse;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSArray *_originalEnabledToolbarItems;
    NSArray *_originalToolbarItems;
    UIToolbar *_originalToolbar;
    BOOL _isShowingSpinner;
    BOOL _isPendingDismissal;
    FARequestConfigurator *_requestConfigurator;
    id<FAChildAccountCreationDelegate> _delegate;
    UINavigationController *_navigationController;
    NSString *_continuationData;
}

@property (copy, nonatomic) NSString *continuationData; // @synthesize continuationData=_continuationData;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FAChildAccountCreationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancel;
- (void)_cleanupRemoteUILoader;
- (void)_createAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_createChildAccount;
- (void)_displayConnectionErrorAndCancel;
- (void)_hideActivitySpinner;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (BOOL)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_renewCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_requestConfigurator;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInToolbar:(id)arg1;
- (id)_spinnerView;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (void)loadRemoteUI;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)prepareForDismiss;
- (id)sessionConfigurationForLoader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;

@end

