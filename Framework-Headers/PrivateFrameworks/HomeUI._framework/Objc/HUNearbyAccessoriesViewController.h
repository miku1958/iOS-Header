//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

@class HMAccessory, HUNearbyAccessoriesItemManager, NSArray, UILabel;
@protocol HUNearbyAccessoriesViewControllerDelegate;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController
{
    BOOL _supportsQuickControls;
    id<HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
    HMAccessory *_currentAccessory;
    UILabel *_userInfoHeading;
    UILabel *_userInfoDescription;
    NSArray *_userInfoConstraints;
}

@property (strong, nonatomic) HMAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property (readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager; // @dynamic itemManager;
@property (weak, nonatomic) id<HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate; // @synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate;
@property (nonatomic) BOOL supportsQuickControls; // @synthesize supportsQuickControls=_supportsQuickControls;
@property (strong, nonatomic) NSArray *userInfoConstraints; // @synthesize userInfoConstraints=_userInfoConstraints;
@property (strong, nonatomic) UILabel *userInfoDescription; // @synthesize userInfoDescription=_userInfoDescription;
@property (strong, nonatomic) UILabel *userInfoHeading; // @synthesize userInfoHeading=_userInfoHeading;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(BOOL)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
