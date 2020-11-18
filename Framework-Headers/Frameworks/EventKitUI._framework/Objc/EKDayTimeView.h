//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKCurrentTimeMarkerViewUpdating-Protocol.h>
#import <EventKitUI/EKUITintColorUpdateDelegate-Protocol.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIVisualEffect;
@protocol EKDayTimeViewDelegate;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate>
{
    NSMutableArray *_contentViews;
    NSMutableDictionary *_visualEffectViews;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    double _highlightedHour;
    long long _orientation;
    double _hourSize;
    double _designatorSize;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    double _timeWidth;
    BOOL _showsTimeMarker;
    BOOL _showsTimeMarkerExtension;
    BOOL _usesLightText;
    UIColor *_timeColor;
    double _hoursToPad;
    UIVisualEffect *_visualEffect;
    double _hourHeightScale;
    double _hourHeight;
    id<EKDayTimeViewDelegate> _delegate;
    struct _NSRange _hoursToRender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double defaultHeight;
@property (weak, nonatomic) id<EKDayTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double highlightedHour;
@property (readonly, nonatomic) double hourHeight; // @synthesize hourHeight=_hourHeight;
@property (nonatomic) double hourHeightScale; // @synthesize hourHeightScale=_hourHeightScale;
@property (nonatomic) double hoursToPad; // @synthesize hoursToPad=_hoursToPad;
@property (nonatomic) struct _NSRange hoursToRender; // @synthesize hoursToRender=_hoursToRender;
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsRightBorder;
@property (nonatomic) BOOL showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property (nonatomic) BOOL showsTimeMarkerExtension; // @synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *timeColor; // @synthesize timeColor=_timeColor;
@property (readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker;
@property (nonatomic) BOOL usesLightText; // @synthesize usesLightText=_usesLightText;
@property (strong, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;

+ (id)_boldFontForOrientation:(long long)arg1;
+ (void)_calculateWidthForOrientation:(long long)arg1 excludeCurrentTime:(BOOL)arg2;
+ (double)_dynamicFontSizeForOrientation:(long long)arg1;
+ (void)_invalidateCachedValues;
+ (void)_invalidateWidth;
+ (id)_noonLocalizedString;
+ (double)_noonLocalizedWidthForOrientation:(long long)arg1;
+ (id)_normalFontForOrientation:(long long)arg1;
+ (void)_registerForInvalidation;
+ (double)_timeTextWidthForOrientation:(long long)arg1;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForOrientation:(long long)arg1 withHourScale:(double)arg2;
+ (double)defaultHourScale;
+ (double)designatorSizeForOrientation:(long long)arg1;
+ (double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2;
+ (double)hourHeightForOrientation:(long long)arg1;
+ (double)hourSizeForOrientation:(long long)arg1;
+ (double)hourWidthForOrientation:(long long)arg1;
+ (void)setVerticalPadding:(double)arg1;
+ (double)timeInsetForOrientation:(long long)arg1;
+ (double)timeVerticalInsetForOrientation:(long long)arg1;
+ (double)timeWidthForOrientation:(long long)arg1;
+ (id)unscaledAllDayLabelFont;
+ (double)verticalPadding;
- (void).cxx_destruct;
- (void)_fontSizeChanged;
- (void)_invalidateTimeWidth;
- (void)_localeChanged;
- (double)_positionOfSecond:(int)arg1;
- (void)_sizeClassChanged;
- (double)_timeWidth;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutFrames;
- (void)layoutSubviews;
- (double)scaledHourHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)setOpaque:(BOOL)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (double)topPadding;
- (void)updateMarkerPosition;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;

@end

