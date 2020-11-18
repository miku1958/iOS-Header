//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay>
{
    UIView *_platter;
    UIView *_highlightView;
    NSDate *_timeTravelDate;
    BOOL canUseCurvedText;
    BOOL _useRoundedFontDesign;
    BOOL _usesMediumLayout;
    BOOL _wantsPlatter;
    BOOL _usesMultiColor;
    id<NTKComplicationDisplayObserver> displayObserver;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    CLKComplicationTemplate *_complicationTemplate;
}

@property (nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property (nonatomic) BOOL useRoundedFontDesign; // @synthesize useRoundedFontDesign=_useRoundedFontDesign;
@property (nonatomic) BOOL usesMediumLayout; // @synthesize usesMediumLayout=_usesMediumLayout;
@property (nonatomic) BOOL usesMultiColor; // @synthesize usesMultiColor=_usesMultiColor;
@property (nonatomic) BOOL wantsPlatter; // @synthesize wantsPlatter=_wantsPlatter;

+ (id)_alarmImageProviderMedium:(BOOL)arg1;
+ (id)_stopwatchImageProviderMedium:(BOOL)arg1;
+ (id)_timerImageProviderMedium:(BOOL)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (id)mediumViewForComplicationType:(unsigned long long)arg1;
+ (id)viewForComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_fontForDynamicFontSize:(long long)arg1;
- (CDStruct_69ceb9b6)_layoutConstants;
- (id)_mediumStackFontForText:(id)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_updateColorChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (long long)_variableFontSizeForText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end

