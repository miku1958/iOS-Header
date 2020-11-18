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

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, OBBoldTrayButton, TSCellularPlanLabelPickerViewController, UITableViewCell;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanLabelsViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    OBBoldTrayButton *_doneButton;
    BOOL _allowDismiss;
    id<TSSIMSetupFlowDelegate> _delegate;
    NSLayoutConstraint *_heightAnchor;
    UITableViewCell *_sectionFooter;
    NSMutableArray *_sortedPlanItemsWithPendingLabels;
    TSCellularPlanLabelPickerViewController *_labelPickerViewController;
    NSArray *_planItemBadges;
    NSString *_iccid;
}

@property BOOL allowDismiss; // @synthesize allowDismiss=_allowDismiss;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property (readonly) NSString *iccid; // @synthesize iccid=_iccid;
@property (strong) TSCellularPlanLabelPickerViewController *labelPickerViewController; // @synthesize labelPickerViewController=_labelPickerViewController;
@property (strong) NSArray *planItemBadges; // @synthesize planItemBadges=_planItemBadges;
@property (strong) UITableViewCell *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property (strong) NSMutableArray *sortedPlanItemsWithPendingLabels; // @synthesize sortedPlanItemsWithPendingLabels=_sortedPlanItemsWithPendingLabels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (BOOL)canBeShownFromSuspendedState;
- (id)getPendingLabelAtIndex:(long long)arg1;
- (id)getPlanItemByIndex:(long long)arg1;
- (id)getPredefinedUserLabels;
- (id)initWithAllowDismiss:(BOOL)arg1;
- (id)initWithIccid:(id)arg1 allowDismiss:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepare:(CDUnknownBlockType)arg1;
- (void)savePlanLabels:(CDUnknownBlockType)arg1;
- (void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
