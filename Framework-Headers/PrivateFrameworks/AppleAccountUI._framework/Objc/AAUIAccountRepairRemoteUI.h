//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary, NSMutableArray, NSString, RUILoader, UIAlertView, UINavigationController, UIViewController;
@protocol AAUIAccountRepairRemoteUIDelegate;

@interface AAUIAccountRepairRemoteUI : NSObject <RUIObjectModelDelegate>
{
    UINavigationController *_parentNavController;
    UIViewController *_originatingViewController;
    UINavigationController *_accountRepairUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    BOOL _isModal;
    UIAlertView *_tcConfirmationAlert;
    NSString *_agreeURL;
    CDUnknownBlockType _linkLoadCompletion;
    NSDictionary *_cookieHeadersForRepairRequest;
    id<AAUIAccountRepairRemoteUIDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUIAccountRepairRemoteUIDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpAndDismissWithSuccess:(BOOL)arg1;
- (void)_cleanupRUILoader;
- (void)_displayConnectionErrorAndDismiss;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)presentFromViewController:(id)arg1 modal:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)useCookieHeadersForInitialRequest:(id)arg1;

@end
