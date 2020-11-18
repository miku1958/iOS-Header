//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/CLKSensitiveUIStateObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationDisplayObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKControl-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString, UIView;
@protocol CLKMonochromeFilterProvider, NTKComplicationDisplay, NTKComplicationDisplayWrapperViewAnimationDelegate;

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, CLKSensitiveUIStateObserver, NTKControl, NTKTimeTravel>
{
    UIView<NTKComplicationDisplay> *_currentComplicationView;
    UIView<NTKComplicationDisplay> *_nextComplicationView;
    UIView<NTKComplicationDisplay> *_deferredComplicationView;
    UIView *_clipView;
    UIView *_earlierContainerView;
    UIView *_laterContainerView;
    CLKComplicationTemplate *_prevTemplate;
    CLKComplicationTemplate *_template;
    NSDate *_timeTravelDate;
    BOOL _didChangeLayoutOverride;
    BOOL _isAnimating;
    BOOL _isDetachedDisplay;
    BOOL _supportsCurvedText;
    BOOL _paused;
    BOOL _editing;
    BOOL _tapEnabled;
    BOOL _dimmed;
    BOOL _hasLegacyDisplay;
    long long _family;
    NSString *_complicationSlotIdentifier;
    UIView<NTKComplicationDisplay> *_display;
    CDUnknownBlockType _displayConfigurationHandler;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchUpInsideHandler;
    id<NTKComplicationDisplayWrapperViewAnimationDelegate> _animationDelegate;
    CDUnknownBlockType _needsResizeHandler;
    CLKComplicationTemplate *_complicationTemplate;
    double _alphaForDimmedState;
    long long _layoutOverride;
    id<CLKMonochromeFilterProvider> _filterProvider;
    CDUnknownBlockType _renderStatsHandler;
    struct CGSize _maxSize;
}

@property (nonatomic) double alphaForDimmedState; // @synthesize alphaForDimmedState=_alphaForDimmedState;
@property (weak, nonatomic) id<NTKComplicationDisplayWrapperViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property (strong, nonatomic) NSString *complicationSlotIdentifier; // @synthesize complicationSlotIdentifier=_complicationSlotIdentifier;
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property (readonly, nonatomic) UIView<NTKComplicationDisplay> *display; // @synthesize display=_display;
@property (copy, nonatomic) CDUnknownBlockType displayConfigurationHandler; // @synthesize displayConfigurationHandler=_displayConfigurationHandler;
@property (nonatomic) BOOL editing; // @synthesize editing=_editing;
@property (readonly, nonatomic) long long family; // @synthesize family=_family;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly, nonatomic) BOOL hasLegacyDisplay; // @synthesize hasLegacyDisplay=_hasLegacyDisplay;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long layoutOverride; // @synthesize layoutOverride=_layoutOverride;
@property (nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property (copy, nonatomic) CDUnknownBlockType needsResizeHandler; // @synthesize needsResizeHandler=_needsResizeHandler;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) struct CGSize preferredSize;
@property (copy, nonatomic) CDUnknownBlockType renderStatsHandler; // @synthesize renderStatsHandler=_renderStatsHandler;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCurvedText; // @synthesize supportsCurvedText=_supportsCurvedText;
@property (nonatomic) BOOL tapEnabled; // @synthesize tapEnabled=_tapEnabled;
@property (copy, nonatomic) CDUnknownBlockType touchDownHandler; // @synthesize touchDownHandler=_touchDownHandler;
@property (copy, nonatomic) CDUnknownBlockType touchUpInsideHandler; // @synthesize touchUpInsideHandler=_touchUpInsideHandler;

- (void).cxx_destruct;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (BOOL)_displayIsTappable;
- (void)_invokeNeedsResizeHandler;
- (void)_invokeTouchDownHandler;
- (BOOL)_invokeTouchUpInsideHandler;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long *)arg2;
- (void)_removeDisplay:(id)arg1;
- (void)_replaceDisplayWithDisplayClass:(Class)arg1 template:(id)arg2 reason:(long long)arg3 animation:(unsigned long long)arg4 animationType:(unsigned long long)arg5 animationFraction:(float)arg6;
- (void)_resetComplicationViews;
- (void)_setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3 animationType:(unsigned long long)arg4 animationFraction:(float)arg5;
- (void)_setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4;
- (void)_setDisplayEditing:(BOOL)arg1;
- (void)_setDisplayMaxSize:(struct CGSize)arg1;
- (void)_timelineAnimationDidFinish;
- (void)_tryToSetDisplayHighlighted:(BOOL)arg1;
- (void)_updateVisibilityForSensitivity:(long long)arg1;
- (void)complicationDisplay:(id)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCustomTemplateDisplay:(id)arg1 isDetachedDisplay:(BOOL)arg2 family:(long long)arg3;
- (id)initWithFamily:(long long)arg1;
- (id)initWithLegacyDisplay:(id)arg1;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (void)layoutSubviews;
- (void)needsResize;
- (BOOL)performTap;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sensitiveUIStateChanged;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldCancelTouchesInScrollview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
