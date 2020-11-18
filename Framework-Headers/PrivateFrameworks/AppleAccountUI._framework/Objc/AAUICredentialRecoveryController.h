//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUILoaderDelegate-Protocol.h>
#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class NSMutableArray, NSString, NSURL, RUILoader, RUIPage, UIActivityIndicatorView, UIBarButtonItem, UINavigationController, UINavigationItem, UIViewController;
@protocol AAUICredentialRecoveryPresentationDelegate;

@interface AAUICredentialRecoveryController : NSObject <RUIObjectModelDelegate, RUILoaderDelegate>
{
    NSURL *_remoteUIURL;
    RUILoader *_remoteUILoader;
    RUIPage *_loadingPage;
    NSMutableArray *_objectModels;
    UINavigationController *_navigationController;
    UIViewController *_presentationViewController;
    UIViewController *_navigationBaseViewController;
    BOOL _isModal;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    BOOL _isShowingSpinner;
    NSObject<AAUICredentialRecoveryPresentationDelegate> *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUICredentialRecoveryPresentationDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanupLoader;
- (void)_createRemoteUIViewControllerFromURL:(id)arg1;
- (void)_displayConnectionError;
- (void)_finishPresentationWithSuccess:(BOOL)arg1;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_showActivitySpinnerInNavigationBar;
- (void)cancelPresentation;
- (id)init;
- (id)initWithRemoteUIURL:(id)arg1 modalPresentation:(BOOL)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)remoteUIURL;
- (void)startPresentation;

@end

