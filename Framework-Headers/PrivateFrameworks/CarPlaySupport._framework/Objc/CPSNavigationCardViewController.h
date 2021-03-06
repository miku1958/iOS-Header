//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/CPSNavigationDisplaying-Protocol.h>

@class CPSLayoutHelperView, CPSManeuversCardView, CPSPausedCardView, NSArray, NSLayoutConstraint, NSMutableSet, NSString, UIColor, UIView;

@interface CPSNavigationCardViewController : UIViewController <CPSNavigationDisplaying>
{
    BOOL _navigationCardHidden;
    BOOL _passesLinkCheck;
    CPSLayoutHelperView *_layoutHelperView;
    UIColor *_guidanceBackgroundColor;
    NSString *_navigatingBundleIdentifier;
    NSLayoutConstraint *_containerViewHeightConstraint;
    NSLayoutConstraint *_containerViewTopConstraint;
    NSLayoutConstraint *_sizingViewBottomConstraint;
    UIView *_containerView;
    CPSManeuversCardView *_currentManeuversCardView;
    CPSPausedCardView *_currentPausedCardView;
    NSMutableSet *_navigationCardHiddenRequesters;
    NSArray *_layoutHelperVerticalConstraints;
}

@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) NSLayoutConstraint *containerViewHeightConstraint; // @synthesize containerViewHeightConstraint=_containerViewHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *containerViewTopConstraint; // @synthesize containerViewTopConstraint=_containerViewTopConstraint;
@property (strong, nonatomic) CPSManeuversCardView *currentManeuversCardView; // @synthesize currentManeuversCardView=_currentManeuversCardView;
@property (strong, nonatomic) CPSPausedCardView *currentPausedCardView; // @synthesize currentPausedCardView=_currentPausedCardView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *layoutHelperVerticalConstraints; // @synthesize layoutHelperVerticalConstraints=_layoutHelperVerticalConstraints;
@property (readonly, nonatomic) CPSLayoutHelperView *layoutHelperView; // @synthesize layoutHelperView=_layoutHelperView;
@property (copy, nonatomic) NSString *navigatingBundleIdentifier; // @synthesize navigatingBundleIdentifier=_navigatingBundleIdentifier;
@property (nonatomic) BOOL navigationCardHidden; // @synthesize navigationCardHidden=_navigationCardHidden;
@property (strong, nonatomic) NSMutableSet *navigationCardHiddenRequesters; // @synthesize navigationCardHiddenRequesters=_navigationCardHiddenRequesters;
@property (nonatomic) BOOL passesLinkCheck; // @synthesize passesLinkCheck=_passesLinkCheck;
@property (strong, nonatomic) NSLayoutConstraint *sizingViewBottomConstraint; // @synthesize sizingViewBottomConstraint=_sizingViewBottomConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_shouldAnimate;
- (void)_showPausedViewForReason:(unsigned long long)arg1 description:(id)arg2;
- (void)_transitionFromViews:(id)arg1 inView:(id)arg2;
- (void)_updateCardBackgroundColors;
- (void)_updateHelperConstraints;
- (void)_updateLinkedCheck;
- (void)_updateNavigationCardHidden;
- (void)_updateSizingViewConstraintsForView:(id)arg1;
- (void)availableHeightChangedTo:(double)arg1;
- (void)navigator:(id)arg1 didEndTrip:(BOOL)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3;
- (void)setNavigationCardHidden:(BOOL)arg1 forRequester:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)updateTripEstimates:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

