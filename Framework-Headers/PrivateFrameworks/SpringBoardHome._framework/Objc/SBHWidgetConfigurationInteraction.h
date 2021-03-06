//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHIconViewConfigurationInteraction-Protocol.h>
#import <SpringBoardHome/SBHWidgetConfigurationAnimationContext-Protocol.h>
#import <SpringBoardHome/SBViewControllerTransitionContextDelegate-Protocol.h>
#import <SpringBoardHome/WFWidgetConfigurationViewControllerDelegate-Protocol.h>

@class CHSAvocadoDescriptor, INIntent, MTMaterialView, NSString, SBHWidgetSettings, SBIconView, SBViewControllerTransitionContext, UITapGestureRecognizer, UIView, UIViewController, WFWidgetConfigurationOptions, WFWidgetConfigurationViewController;
@protocol SBHIconViewConfigurationInteractionDelegate;

@interface SBHWidgetConfigurationInteraction : NSObject <SBViewControllerTransitionContextDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate, SBHIconViewConfigurationInteraction>
{
    INIntent *_configuration;
    id<SBHIconViewConfigurationInteractionDelegate> _delegate;
    SBHWidgetSettings *_widgetSettings;
    WFWidgetConfigurationOptions *_configurationOptions;
    WFWidgetConfigurationViewController *_configurationViewController;
    UIViewController *_containerViewController;
    UIView *_homeScreenContentView;
    SBIconView *_sourceView;
    SBIconView *_referenceView;
    MTMaterialView *_backgroundView;
    UIView *_backgroundTintView;
    UIView *_touchBlockingView;
    UITapGestureRecognizer *_tapToPresentGesture;
    long long _operation;
    SBViewControllerTransitionContext *_transition;
    CHSAvocadoDescriptor *_widgetDescriptor;
    struct CGRect _sourceContentFrame;
    struct CGRect _targetContentFrame;
    struct CGRect _contentBoundingRect;
}

@property (strong, nonatomic) UIView *backgroundTintView; // @synthesize backgroundTintView=_backgroundTintView;
@property (strong, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (copy, nonatomic) INIntent *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) WFWidgetConfigurationOptions *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
@property (strong, nonatomic) WFWidgetConfigurationViewController *configurationViewController; // @synthesize configurationViewController=_configurationViewController;
@property (readonly, nonatomic) UIView *containerView;
@property (strong, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property (nonatomic) struct CGRect contentBoundingRect; // @synthesize contentBoundingRect=_contentBoundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHIconViewConfigurationInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *homeScreenContentView; // @synthesize homeScreenContentView=_homeScreenContentView;
@property (nonatomic) long long operation; // @synthesize operation=_operation;
@property (strong, nonatomic) SBIconView *referenceView; // @synthesize referenceView=_referenceView;
@property (nonatomic) struct CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property (strong, nonatomic) SBIconView *sourceView; // @synthesize sourceView=_sourceView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapToPresentGesture; // @synthesize tapToPresentGesture=_tapToPresentGesture;
@property (nonatomic) struct CGRect targetContentFrame; // @synthesize targetContentFrame=_targetContentFrame;
@property (readonly, nonatomic) UIView *targetView;
@property (strong, nonatomic) UIView *touchBlockingView; // @synthesize touchBlockingView=_touchBlockingView;
@property (strong, nonatomic) SBViewControllerTransitionContext *transition; // @synthesize transition=_transition;
@property (readonly, nonatomic) BOOL wantsAnimation;
@property (readonly, copy, nonatomic) CHSAvocadoDescriptor *widgetDescriptor; // @synthesize widgetDescriptor=_widgetDescriptor;
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;

- (void).cxx_destruct;
- (void)_endConfigurationImmediately:(BOOL)arg1;
- (void)_handleDismissalDidFinish;
- (void)_handlePresentationDidFinish;
- (void)_handleTapToDismiss:(id)arg1;
- (void)_handleTapToPresent:(id)arg1;
- (id)_newTransitionAnimator;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)arg1;
- (struct CGRect)_sourceContentFrame;
- (struct CGRect)_targetContentFrame;
- (void)beginConfiguration;
- (void)endConfiguration;
- (void)endConfigurationImmediately;
- (id)initWithWidgetDescriptor:(id)arg1 gridSizeClass:(unsigned long long)arg2 intent:(id)arg3;
- (void)transitionDidFinish:(id)arg1;
- (void)widgetConfigurationViewController:(id)arg1 didFinishWithIntent:(id)arg2;
- (void)widgetConfigurationViewControllerPreferredCardSizeDidChange:(id)arg1;

@end

