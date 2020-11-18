//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIControlCenterPageContentProviding-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterSectionViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterStatusViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIFirstUsePanelViewControllerDelegate-Protocol.h>

@class CCUIAirStuffSectionController, CCUIBrightnessSectionController, CCUIControlCenterStatusView, CCUIFirstUsePanelViewController, CCUINightShiftSectionController, CCUIQuickLaunchSectionController, CCUISettingsSectionController, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, UIView;
@protocol CCUIControlCenterPageContentViewControllerDelegate;

@interface CCUISystemControlsPageViewController : UIViewController <CCUIControlCenterSectionViewControllerDelegate, CCUIControlCenterStatusViewDelegate, CCUIFirstUsePanelViewControllerDelegate, CCUIControlCenterPageContentProviding>
{
    NSMutableArray *_sectionList;
    UIStackView *_horizontalStackView;
    NSMutableArray *_columnStackViews;
    CCUIFirstUsePanelViewController *_firstUseViewController;
    UIView *_firstUseView;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_leadingMargin;
    NSLayoutConstraint *_trailingMargin;
    CCUIControlCenterStatusView *_statusView;
    CCUISettingsSectionController *_settingsSection;
    CCUIBrightnessSectionController *_brightnessSection;
    CCUINightShiftSectionController *_nightShiftSection;
    CCUIAirStuffSectionController *_airStuffSection;
    CCUIAirStuffSectionController *_auxillaryAirStuffSection;
    CCUIQuickLaunchSectionController *_quickLaunchSection;
    id<CCUIControlCenterPageContentViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CCUIControlCenterPageContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsVisible;

- (void).cxx_destruct;
- (void)_acknowledgeAndDismissFirstUsePanelAnimated:(BOOL)arg1;
- (id)_createColumnStackView;
- (long long)_currentLayoutStyle;
- (void)_dismissAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAllSectionVisibilityAnimated:(BOOL)arg1;
- (void)_updateColumns;
- (void)_updateSectionViews;
- (void)_updateSectionVisibility:(id)arg1 animated:(BOOL)arg2;
- (void)_updateStackViewMarginsAndSpacing;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterDidScrollToThisPage:(BOOL)arg1;
- (id)controlCenterSystemAgent;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)firstUsePanelWasAcknowledged:(id)arg1;
- (long long)layoutStyle;
- (void)loadView;
- (void)noteSectionEnabledStateDidChange:(id)arg1;
- (id)pageContainerViewController;
- (void)section:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)sectionWantsControlCenterDismissal:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
