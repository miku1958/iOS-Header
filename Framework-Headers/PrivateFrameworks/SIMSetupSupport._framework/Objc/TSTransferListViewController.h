//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class CTDisplayPlanList, NSArray, NSLayoutConstraint, NSMutableArray, NSString, OBBoldTrayButton, UIView;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>
{
    BOOL _isInEligiblePlanPresent;
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _transferCompleted;
    BOOL _pendingInstallCompleted;
    BOOL _continueButtonTappedOnce;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    CTDisplayPlanList *_pendingInstallItems;
    id<TSSIMSetupFlowDelegate> _delegate;
    NSArray *_transferItems;
    NSLayoutConstraint *_heightAnchor;
    UIView *_tableFooter;
    NSMutableArray *_chosenUseIndexPaths;
}

@property (strong) NSMutableArray *chosenUseIndexPaths; // @synthesize chosenUseIndexPaths=_chosenUseIndexPaths;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property (readonly) Class superclass;
@property (strong) UIView *tableFooter; // @synthesize tableFooter=_tableFooter;
@property (strong) NSArray *transferItems; // @synthesize transferItems=_transferItems;

- (void).cxx_destruct;
- (void)_continueButtonTapped;
- (double)_heightAnchorConstant;
- (void)_maybeUpdateTableView;
- (void)_preparePlanPendingInstall:(id)arg1 withDeviceID:(id)arg2;
- (void)_preparePlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_skipButtonTapped;
- (void)_startPendingInstall:(id)arg1;
- (void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_viewMaybeCompleted;
- (BOOL)canBeShownFromSuspendedState;
- (id)initWithTransferItems:(id)arg1 isInEligiblePlanPresent:(BOOL)arg2 pendingInstallItems:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateFooterView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

