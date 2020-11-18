//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, CLKFont, NSDate, NSString, NTKFaceColorScheme, UIColor, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKUtilityComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay>
{
    BOOL _highlighted;
    BOOL _usesLegibility;
    UIColor *_foregroundColor;
    CLKFont *_font;
    NSDate *_timeTravelDate;
    BOOL _canUseCurvedText;
    BOOL _shouldUseBackgroundPlatter;
    BOOL _useRoundedFontDesign;
    BOOL _suppressesInternalColorOverrides;
    BOOL _editing;
    id<NTKComplicationDisplayObserver> displayObserver;
    double _foregroundAlpha;
    UIColor *_shadowColor;
    CLKDevice *_device;
    UIColor *_accentColor;
    double _foregroundImageAlpha;
    unsigned long long _placement;
    double _fontWeight;
    double _editingRotationAngle;
    UIImageView *_backgroundPlatter;
    double _minimumWidth;
    UIView *_highlightView;
    NTKFaceColorScheme *_colorScheme;
    UIColor *_overrideColor;
    UIColor *_platterColor;
    CLKComplicationTemplate *_complicationTemplate;
    struct CGSize _maxSize;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (strong, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property (strong, nonatomic) UIImageView *backgroundPlatter; // @synthesize backgroundPlatter=_backgroundPlatter;
@property (nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText=_canUseCurvedText;
@property (strong, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property (readonly, nonatomic) BOOL editing; // @synthesize editing=_editing;
@property (nonatomic) double editingRotationAngle; // @synthesize editingRotationAngle=_editingRotationAngle;
@property (strong, nonatomic) CLKFont *font; // @synthesize font=_font;
@property (nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property (nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (nonatomic) double foregroundImageAlpha; // @synthesize foregroundImageAlpha=_foregroundImageAlpha;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property (nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property (strong, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property (nonatomic) unsigned long long placement; // @synthesize placement=_placement;
@property (strong, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property (strong, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property (nonatomic) BOOL shouldUseBackgroundPlatter; // @synthesize shouldUseBackgroundPlatter=_shouldUseBackgroundPlatter;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesInternalColorOverrides; // @synthesize suppressesInternalColorOverrides=_suppressesInternalColorOverrides;
@property (readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property (nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property (nonatomic) BOOL useRoundedFontDesign; // @synthesize useRoundedFontDesign=_useRoundedFontDesign;
@property (nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;

+ (id)_alarmImageProviderActive:(BOOL)arg1;
+ (id)_preferredAdditionalFontSettings;
+ (id)_stopwatchImageProvider;
+ (id)_timerImageProvider;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(BOOL)arg2;
+ (id)smallComplicationViewForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_applyColorScheme:(id)arg1;
- (void)_applyForegroundAlpha;
- (id)_backgroundPlatterImage;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_newCurvedHighlightView;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1;
- (id)_newHighlightView;
- (id)_newHighlightViewVariant:(BOOL)arg1;
- (id)_newImageViewSubview;
- (id)_newImageViewSubviewWithAlpha:(double)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1 variant:(BOOL)arg2;
- (id)_newStandardCurvedLabelSubview;
- (id)_newStandardLabelSubview;
- (id)_newStandardLabelSubviewVariant:(BOOL)arg1;
- (id)_smallCapsFont;
- (id)_standardFont;
- (struct UIEdgeInsets)_touchEdgeInsetsForPlacement:(unsigned long long)arg1;
- (void)_updateContentForEditingChange;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewAlpha:(id)arg1;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (double)_widthThatFits;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLabelVertically:(id)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

