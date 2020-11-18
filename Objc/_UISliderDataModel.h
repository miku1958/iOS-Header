//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface _UISliderDataModel : NSObject
{
    struct __CFDictionary *_contentLookup;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
    BOOL _continuous;
    BOOL _showValue;
    BOOL _thumbEnabled;
    BOOL _trackEnabled;
    BOOL _minimumTrackVisible;
    BOOL _enabled;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _tracking;
    float _value;
    float _minValue;
    float _maxValue;
    UIImage *_minimumValueImage;
    UIImage *_maximumValueImage;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
}

@property (nonatomic, getter=isContinuous) BOOL continuous; // @synthesize continuous=_continuous;
@property (strong, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maxTintColor;
@property (readonly, nonatomic) float maximumValue; // @synthesize maximumValue=_maxValue;
@property (strong, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property (strong, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minTintColor;
@property (nonatomic, getter=isMinimumTrackVisible) BOOL minimumTrackVisible; // @synthesize minimumTrackVisible=_minimumTrackVisible;
@property (readonly, nonatomic) float minimumValue; // @synthesize minimumValue=_minValue;
@property (strong, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property (strong, nonatomic) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) BOOL showValue; // @synthesize showValue=_showValue;
@property (nonatomic, getter=isThumbEnabled) BOOL thumbEnabled; // @synthesize thumbEnabled=_thumbEnabled;
@property (strong, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property (nonatomic, getter=isTrackEnabled) BOOL trackEnabled; // @synthesize trackEnabled=_trackEnabled;
@property (nonatomic, getter=isTracking) BOOL tracking; // @synthesize tracking=_tracking;
@property (readonly, nonatomic) float value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)dealloc;
- (id)init;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (BOOL)setMaximumValue:(float)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (BOOL)setMinimumValue:(float)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (BOOL)setValue:(float)arg1;
- (id)thumbImageForState:(unsigned long long)arg1;

@end

