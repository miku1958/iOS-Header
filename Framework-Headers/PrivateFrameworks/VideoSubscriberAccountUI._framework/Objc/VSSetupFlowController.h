//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSIdentityProviderPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderRequestManagerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSRemoteNotifierDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSSupportedAppsViewControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, VSAccountSerializationCenter, VSAppDescription, VSDevice, VSIdentityProviderRequestManager, VSPersistentStorage, VSPreferences, VSRemoteNotifier;
@protocol VSSetupFlowControllerDelegate;

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate, VSIdentityProviderRequestManagerDelegate>
{
    BOOL _isInSTBMode;
    BOOL _signingIn;
    BOOL _notifyDelegateFromActivation;
    id<VSSetupFlowControllerDelegate> _delegate;
    VSPreferences *_preferences;
    VSPersistentStorage *_storage;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    NSArray *_freeOnBoardingBundleIDs;
    VSAppDescription *_appDescription;
    NSString *_providerAccountUsername;
    VSIdentityProviderRequestManager *_requestManager;
    CDUnknownBlockType _goingBackActivationCompletionBlock;
    VSDevice *_currentDevice;
    VSAccountSerializationCenter *_serializationCenter;
}

@property (strong, nonatomic) VSAppDescription *appDescription; // @synthesize appDescription=_appDescription;
@property (strong, nonatomic) VSDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSSetupFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *freeOnBoardingBundleIDs; // @synthesize freeOnBoardingBundleIDs=_freeOnBoardingBundleIDs;
@property (copy, nonatomic) CDUnknownBlockType goingBackActivationCompletionBlock; // @synthesize goingBackActivationCompletionBlock=_goingBackActivationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInSTBMode; // @synthesize isInSTBMode=_isInSTBMode;
@property (nonatomic) BOOL notifyDelegateFromActivation; // @synthesize notifyDelegateFromActivation=_notifyDelegateFromActivation;
@property (strong, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (strong, nonatomic) NSString *providerAccountUsername; // @synthesize providerAccountUsername=_providerAccountUsername;
@property (strong, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property (strong, nonatomic) VSIdentityProviderRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property (strong, nonatomic) VSAccountSerializationCenter *serializationCenter; // @synthesize serializationCenter=_serializationCenter;
@property (nonatomic, getter=isSigningIn) BOOL signingIn; // @synthesize signingIn=_signingIn;
@property (strong, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_didStartLoading;
- (void)_dismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2;
- (id)_getProviderWithUserTokenFromAllProviders:(id)arg1;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(BOOL)arg5 arrivedViaNotNowButton:(BOOL)arg6 arrivedAfterSigningIn:(BOOL)arg7 goingBack:(BOOL)arg8;
- (void)_offerAuthenticationForProvider:(id)arg1 withSupportedAppsButton:(BOOL)arg2 msoAppDescription:(id)arg3;
- (void)_offerAuthenticationForSTBProvider:(id)arg1 msoAppDescription:(id)arg2 providerAccountUsername:(id)arg3;
- (void)_offerAuthenticationWithSupportedAppsButton:(BOOL)arg1;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2 arrivedViaNotNowButton:(BOOL)arg3 arrivedAfterSigningIn:(BOOL)arg4 goingBack:(BOOL)arg5;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)_startLoadingAfterOfferingOptions:(BOOL)arg1 endingUndoGrouping:(BOOL)arg2 arrivedViaNotNowButton:(BOOL)arg3 arrivedAfterSigningIn:(BOOL)arg4 goingBack:(BOOL)arg5;
- (void)dealloc;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)finishSTBSuccessFlowForProvider:(id)arg1;
- (void)forceSignOutWithAccount:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (id)init;
- (void)markSTBProviderAppForInstallation:(id)arg1 withAppPlacementPosition:(id)arg2;
- (void)notNow;
- (void)notNowWithIdentityProvider:(id)arg1;
- (void)performDismissalOfIdentityProviderViewController:(id)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)showSupportedApps;
- (void)signOutForNotNowFlowWithIdentityProvider:(id)arg1;
- (void)startLoadingWhenGoingBack:(BOOL)arg1 serializedAccountDataToImport:(id)arg2;
- (void)startSigningIn;
- (void)startSigningInForIdentityProvider:(id)arg1;
- (void)startSilentSigningInForSTBFromActivation:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;

@end

