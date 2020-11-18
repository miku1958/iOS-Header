//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/_UIClickInteractionDelegate-Protocol.h>

@class MTMaterialView, NCClickInteractionPresentedControl, NCTouchEaterGestureRecognizer, NSString, UIView, _UIClickInteraction;
@protocol NCClickInteractionPresenterDelegate;

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate>
{
    BOOL _presented;
    BOOL _hinting;
    UIView *_sourceView;
    NSString *_groupName;
    long long _materialRecipe;
    id<NCClickInteractionPresenterDelegate> _delegate;
    long long _overrideUserInterfaceStyle;
    _UIClickInteraction *_clickInteraction;
    UIView *_containerView;
    UIView *_portalView;
    NCTouchEaterGestureRecognizer *_touchEater;
    NCClickInteractionPresentedControl *_presentedControl;
    MTMaterialView *_backgroundMaterialView;
    struct CGRect _sourceViewVisibleRect;
}

@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property (readonly, nonatomic, getter=_clickInteraction) _UIClickInteraction *clickInteraction; // @synthesize clickInteraction=_clickInteraction;
@property (readonly, nonatomic, getter=_containerView) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCClickInteractionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_isHinting, setter=_setHinting:) BOOL hinting; // @synthesize hinting=_hinting;
@property (readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property (nonatomic) long long overrideUserInterfaceStyle; // @synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle;
@property (readonly, nonatomic, getter=_portalView) UIView *portalView; // @synthesize portalView=_portalView;
@property (nonatomic, getter=isPresented, setter=_setPresented:) BOOL presented; // @synthesize presented=_presented;
@property (readonly, nonatomic, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl; // @synthesize presentedControl=_presentedControl;
@property (readonly, weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) struct CGRect sourceViewVisibleRect; // @synthesize sourceViewVisibleRect=_sourceViewVisibleRect;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, weak, nonatomic, getter=_touchEater) NCTouchEaterGestureRecognizer *touchEater; // @synthesize touchEater=_touchEater;

- (void).cxx_destruct;
- (void)_animatePresentation:(BOOL)arg1 cancelled:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureContainerViewIfNecessary;
- (void)_configurePortalViewIfNecessary;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGRect)_finalPresentedViewFrame;
- (double)_frictionForTransitionPresentation:(BOOL)arg1 cancelled:(BOOL)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (struct CGRect)_initialPresentedViewFrame;
- (void)_performCancel;
- (void)_performPresentation;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpContainerView;
- (void)_setUpPortalView;
- (void)_setUpPresentedControl;
- (void)_setUpSubviews;
- (void)_tearDown;
- (double)_tensionForTransitionPresentation:(BOOL)arg1 cancelled:(BOOL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (BOOL)clickInteractionShouldBegin:(id)arg1;
- (void)dealloc;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3;

@end
