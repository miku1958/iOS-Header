//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/ICQPageDelegate-Protocol.h>
#import <iCloudQuotaUI/ICQServerHookDelegate-Protocol.h>
#import <iCloudQuotaUI/RemoteUIControllerDelegate-Protocol.h>
#import <iCloudQuotaUI/UINavigationControllerDelegate-Protocol.h>

@class AAUIRemoteUIController, AAUIServerUIHookHandler, ICQAlertController, ICQOffer, ICQUpgradeFlowOptions, ICQUpgradeOfferViewController, NSDictionary, NSString, UINavigationController;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate, RemoteUIControllerDelegate, ICQServerHookDelegate>
{
    CDUnknownBlockType _didComplete;
    BOOL _didReceiveiTunesCode;
    BOOL _didCompleteICQAction;
    ICQUpgradeOfferViewController *_busyOfferViewController;
    int _renewCredentialsCount;
    AAUIServerUIHookHandler *_serverHookHandler;
    BOOL _shouldNavigationControllerBeDismissed;
    BOOL _completedFamilySetup;
    ICQOffer *_offer;
    NSDictionary *_bindings;
    ICQUpgradeFlowOptions *_flowOptions;
    id<ICQUpgradeFlowManagerDelegate> _delegate;
    UINavigationController *_hostingNavigationController;
    ICQAlertController *_upgradeAlertController;
    AAUIRemoteUIController *_remoteUIController;
}

@property (strong, nonatomic) NSDictionary *bindings; // @synthesize bindings=_bindings;
@property (nonatomic) BOOL completedFamilySetup; // @synthesize completedFamilySetup=_completedFamilySetup;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // @synthesize flowOptions=_flowOptions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UINavigationController *hostingNavigationController; // @synthesize hostingNavigationController=_hostingNavigationController;
@property (readonly, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;
@property (strong, nonatomic) AAUIRemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
@property (nonatomic) BOOL shouldNavigationControllerBeDismissed; // @synthesize shouldNavigationControllerBeDismissed=_shouldNavigationControllerBeDismissed;
@property (readonly) Class superclass;
@property (strong, nonatomic) ICQAlertController *upgradeAlertController; // @synthesize upgradeAlertController=_upgradeAlertController;

+ (id)activeFlowManagers;
+ (void)addActiveFlowManager:(id)arg1;
+ (void)needsToRunWithCompletion:(CDUnknownBlockType)arg1;
+ (void)removeActiveFlowManager:(id)arg1;
+ (BOOL)shouldShowForOffer:(id)arg1;
+ (BOOL)shouldSubclassShowForOffer:(id)arg1;
+ (Class)subclassForOfferType:(long long)arg1;
- (void).cxx_destruct;
- (id)_ICQNavigationControllerWithRootViewController:(id)arg1;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (void)_addBlurEffectToNavigationController:(id)arg1;
- (void)_cancelFlow;
- (void)_clearBusyOfferViewController;
- (void)_configurePresentingViewController:(id)arg1;
- (void)_initiateFamilySetupFlow;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_presentUpgradeComplete;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_setBusyOfferViewController:(id)arg1;
- (BOOL)_shouldPresentRemoteFlow;
- (void)_simulateDoneButton;
- (void)_tappedAlertLink:(id)arg1;
- (id)_whitelistedInProcessClients;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (void)dismissUpgradeFlowWithSuccess:(BOOL)arg1;
- (id)init;
- (id)initBaseclassWithOffer:(id)arg1;
- (id)initSubclassWithOffer:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (BOOL)needsNetwork;
- (void)presentFlowHostedInNavigationController:(id)arg1;
- (void)presentRemoteVieWithData:(id)arg1 andURL:(id)arg2;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)showNetworkFailurePage;
- (void)showUpgradeFailurePage;

@end

