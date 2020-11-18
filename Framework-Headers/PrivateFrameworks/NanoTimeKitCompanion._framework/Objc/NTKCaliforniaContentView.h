//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKCaliforniaColorPalette, NTKCaliforniaStyleTransitionHandler;

@interface NTKCaliforniaContentView : UIView
{
    BOOL _showingStatusIcon;
    BOOL _circularPillMarkersCenterPointsCalculated;
    BOOL _circularTicksHidden;
    unsigned long long _style;
    unsigned long long _dial;
    unsigned long long _color;
    CLKDevice *_device;
    CALayer *_hourTicks;
    CALayer *_minuteTicks;
    CALayer *_fullscreenTicksMulticolor;
    CALayer *_circularTicksMulticolor;
    CALayer *_circularHourTicks;
    CALayer *_circularMinuteTicks;
    NSArray *_hourMarkers;
    NSArray *_temporaryHourMarkers;
    unsigned long long _temporaryHourMarkersStyle;
    unsigned long long _temporaryHourMarkersDial;
    NTKCaliforniaColorPalette *_colorPalette;
    NTKCaliforniaStyleTransitionHandler *_styleTransitionHandler;
}

@property (strong, nonatomic) CALayer *circularHourTicks; // @synthesize circularHourTicks=_circularHourTicks;
@property (strong, nonatomic) CALayer *circularMinuteTicks; // @synthesize circularMinuteTicks=_circularMinuteTicks;
@property (nonatomic) BOOL circularPillMarkersCenterPointsCalculated; // @synthesize circularPillMarkersCenterPointsCalculated=_circularPillMarkersCenterPointsCalculated;
@property (nonatomic) BOOL circularTicksHidden; // @synthesize circularTicksHidden=_circularTicksHidden;
@property (strong, nonatomic) CALayer *circularTicksMulticolor; // @synthesize circularTicksMulticolor=_circularTicksMulticolor;
@property (nonatomic) unsigned long long color; // @synthesize color=_color;
@property (strong, nonatomic) NTKCaliforniaColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property (strong, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (nonatomic) unsigned long long dial; // @synthesize dial=_dial;
@property (strong, nonatomic) CALayer *fullscreenTicksMulticolor; // @synthesize fullscreenTicksMulticolor=_fullscreenTicksMulticolor;
@property (strong, nonatomic) NSArray *hourMarkers; // @synthesize hourMarkers=_hourMarkers;
@property (strong, nonatomic) CALayer *hourTicks; // @synthesize hourTicks=_hourTicks;
@property (strong, nonatomic) CALayer *minuteTicks; // @synthesize minuteTicks=_minuteTicks;
@property (nonatomic) BOOL showingStatusIcon; // @synthesize showingStatusIcon=_showingStatusIcon;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (strong, nonatomic) NTKCaliforniaStyleTransitionHandler *styleTransitionHandler; // @synthesize styleTransitionHandler=_styleTransitionHandler;
@property (strong, nonatomic) NSArray *temporaryHourMarkers; // @synthesize temporaryHourMarkers=_temporaryHourMarkers;
@property (nonatomic) unsigned long long temporaryHourMarkersDial; // @synthesize temporaryHourMarkersDial=_temporaryHourMarkersDial;
@property (nonatomic) unsigned long long temporaryHourMarkersStyle; // @synthesize temporaryHourMarkersStyle=_temporaryHourMarkersStyle;

+ (id)_disabledLayerActions;
- (void).cxx_destruct;
- (void)_createDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)_createLayer;
- (id)_createLayersWithCount:(unsigned long long)arg1;
- (void)_createTemporaryDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)_digitLayersForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (void)_layoutHourMarkersLayers:(id)arg1 style:(unsigned long long)arg2 dialShape:(unsigned long long)arg3;
- (void)addCircularTicksIfNeeded:(id)arg1;
- (void)addFullscreenTicksIfNeeded:(id)arg1;
- (id)allTicksForStatus:(BOOL)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (struct CGPoint *)circularPillMarkersCenterPoints;
- (void)configureTicksForStatus:(BOOL)arg1;
- (id)createCaliforniaGraphicAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createLabelForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createPillAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createPillViewWithAngle:(double)arg1 size:(const struct CGSize *)arg2;
- (struct CGPoint *)hourMarkersCenterPointConstantsForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)hourTicksForStatus:(BOOL)arg1;
- (id)imageNameComponentForDial:(unsigned long long)arg1;
- (id)imageNameComponentForStyle:(unsigned long long)arg1;
- (id)imageNameForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2 dial:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 device:(id)arg5;
- (id)layerWithImage:(id)arg1;
- (void)layoutSubviews;
- (id)pillLayerFromHourMarkerView:(id)arg1;
- (void)removeHourMarkers;
- (void)removeTemporaryHourMarkers;
- (void)setColorInHourMarkerView:(id)arg1 color:(id)arg2;
- (void)setHourTicksColor:(id)arg1;
- (void)setMinuteTicksColor:(id)arg1;
- (id)textForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end
