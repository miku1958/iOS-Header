//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

#import <HomeUI/HFItemSectionAccessoryButtonHeaderDelegate-Protocol.h>
#import <HomeUI/HUQuickControlDetailsViewControllerVendor-Protocol.h>

@class HUAlarmTableViewController, NSArray, NSLayoutConstraint, NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate>
{
    HUAlarmTableViewController *_alarmTableViewController;
    NSArray *_alarmTableViewConstraints;
    NSLayoutConstraint *_heightConstraint;
}

@property (strong, nonatomic) NSArray *alarmTableViewConstraints; // @synthesize alarmTableViewConstraints=_alarmTableViewConstraints;
@property (strong, nonatomic) HUAlarmTableViewController *alarmTableViewController; // @synthesize alarmTableViewController=_alarmTableViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (readonly) Class superclass;

+ (id)controlItemPredicate;
- (void).cxx_destruct;
- (void)_addAlarmControlView;
- (void)_updateConstraints;
- (id)controlItem;
- (id)createDetailsViewController;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (BOOL)isAccessoryControllable;
- (void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2;
- (id)mediaProfileContainer;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)secondaryQuickControlPresentationStyle;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;
- (void)viewDidLoad;

@end
