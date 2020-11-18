//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKOlympusContentViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, NSDate, NSString, NTKOlympusTimeContentView, UIImage;
@protocol NTKOlympusViewDelegate;

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView>
{
    BOOL frozen;
    BOOL _maskingPathStartsFromHourHand;
    BOOL _useSmallFont;
    id<NTKOlympusViewDelegate> _delegate;
    NSDate *_date;
    double _hourHandAngle;
    double _minuteHandAngle;
    unsigned long long _currentStyle;
    unsigned long long _currentDial;
    unsigned long long _currentColor;
    CLKDevice *_device;
    NTKOlympusTimeContentView *_contentView;
    NTKOlympusTimeContentView *_overlayContentView;
    UIImage *_circularLogoImage;
    struct CGSize _maskingSize;
}

@property (strong, nonatomic) UIImage *circularLogoImage; // @synthesize circularLogoImage=_circularLogoImage;
@property (strong, nonatomic) NTKOlympusTimeContentView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) unsigned long long currentColor; // @synthesize currentColor=_currentColor;
@property (nonatomic) unsigned long long currentDial; // @synthesize currentDial=_currentDial;
@property (nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKOlympusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hourHandAngle; // @synthesize hourHandAngle=_hourHandAngle;
@property (nonatomic) BOOL maskingPathStartsFromHourHand; // @synthesize maskingPathStartsFromHourHand=_maskingPathStartsFromHourHand;
@property (nonatomic) struct CGSize maskingSize; // @synthesize maskingSize=_maskingSize;
@property (nonatomic) double minuteHandAngle; // @synthesize minuteHandAngle=_minuteHandAngle;
@property (strong, nonatomic) NTKOlympusTimeContentView *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSmallFont; // @synthesize useSmallFont=_useSmallFont;

- (void).cxx_destruct;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)_createContentViewIfNeeded;
- (void)_createOverlayViewIfNeeded;
- (BOOL)_hasWindrunnerWedge;
- (BOOL)_maskingPathStartsFromHourHandForDate:(id)arg1;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)applyWindrunnerMaskWithDate:(id)arg1;
- (void)applyWindrunnerMaskWithDate:(id)arg1 force:(BOOL)arg2;
- (void)applyWindrunnerMaskWithHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (BOOL)canUpdateWindrunnerMask;
- (void)cleanupAfterEditing;
- (void)configureViewsForEditing;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5;
- (id)initWithDevice:(id)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 date:(id)arg5 useSmallFont:(BOOL)arg6 circularLogoImage:(id)arg7;
- (void)layoutSubviews;
- (void)olympusContentView:(id)arg1 didHandleLogoTouchUpInsideFromRect:(struct CGRect)arg2;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)arg1;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)arg1;
- (void)openVictoryAppFromRect:(struct CGRect)arg1;
- (void)prepareForEditing;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setupViewsForCurrentState:(BOOL)arg1;
- (double)shortestPathBetweenStartAngle:(double)arg1 targetAngle:(double)arg2;
- (void)updateMaskingPathStartPointWithNewHourAngle:(double)arg1 newMinuteAngle:(double)arg2;

@end
