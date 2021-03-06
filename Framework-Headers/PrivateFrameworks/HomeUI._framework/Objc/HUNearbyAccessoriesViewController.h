//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HMAccessory, HUNearbyAccessoriesItemManager, NSArray, NSString, UILabel, _UIContentUnavailableView;
@protocol HUNearbyAccessoriesViewControllerDelegate, HUPresentationDelegate;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController <HUPresentationDelegateHost>
{
    BOOL _supportsQuickControls;
    id<HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
    id<HUPresentationDelegate> _presentationDelegate;
    HMAccessory *_currentAccessory;
    _UIContentUnavailableView *_userInfoHeading;
    UILabel *_userInfoDescription;
    NSArray *_userInfoConstraints;
}

@property (strong, nonatomic) HMAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager; // @dynamic itemManager;
@property (weak, nonatomic) id<HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate; // @synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsQuickControls; // @synthesize supportsQuickControls=_supportsQuickControls;
@property (strong, nonatomic) NSArray *userInfoConstraints; // @synthesize userInfoConstraints=_userInfoConstraints;
@property (strong, nonatomic) UILabel *userInfoDescription; // @synthesize userInfoDescription=_userInfoDescription;
@property (strong, nonatomic) _UIContentUnavailableView *userInfoHeading; // @synthesize userInfoHeading=_userInfoHeading;

- (void).cxx_destruct;
- (void)_updateUserInfo;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)displayEditor;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(BOOL)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

