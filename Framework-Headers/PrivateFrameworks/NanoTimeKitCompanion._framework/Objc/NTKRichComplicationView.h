//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;
@protocol CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;

@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider>
{
    long long _family;
    BOOL _editing;
    BOOL _highlighted;
    NSDate *_timeTravelDate;
    BOOL canUseCurvedText;
    BOOL _paused;
    id<CLKMonochromeFilterProvider> _filterProvider;
    id<NTKComplicationDisplayObserver> displayObserver;
    CLKComplicationTemplate *_template;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_templateBackgroundColor;
}

@property (nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property (readonly, nonatomic) NSDate *complicationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (readonly, nonatomic) long long family; // @synthesize family=_family;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;
@property (strong, nonatomic) UIColor *templateBackgroundColor; // @synthesize templateBackgroundColor=_templateBackgroundColor;
@property (readonly, nonatomic) NSDate *timeTravelDate;

+ (BOOL)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)complicationTemplate;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFamily:(long long)arg1;
- (id)interpolatedColorForView:(id)arg1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1;

@end
