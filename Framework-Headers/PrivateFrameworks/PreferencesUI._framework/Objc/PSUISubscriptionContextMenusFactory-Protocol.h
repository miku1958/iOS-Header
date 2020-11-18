//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTCellularPlanManager, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (PSUICallingSubgroup *)createCallingSubgroup;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
- (PSSpecifier *)parentSpecifier;
- (BOOL)shouldPopViewControllerOnPlanRemoval;
@end

