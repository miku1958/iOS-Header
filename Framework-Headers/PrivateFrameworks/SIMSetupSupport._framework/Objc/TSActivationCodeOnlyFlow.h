//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSError, NSString, UIBarButtonItem, UIViewController;
@protocol TSSetupFlowItem;

@interface TSActivationCodeOnlyFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    BOOL _confirmationCodeRequired;
    NSError *_planInstallError;
    NSString *_carrierName;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    BOOL _isPreinstallingViewControllerActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isPreinstallingViewControllerActive; // @synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)init;
- (id)nextViewControllerFrom:(id)arg1;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)popViewController:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (long long)signupUserConsentResponse;
- (void)viewControllerDidComplete:(id)arg1;

@end
