//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, NSString, UIColor, UIVibrancyEffect;

@interface NCVibrantStyling : NSObject
{
    CAFilter *_composedFilter;
    BOOL _inputReversed;
    long long _style;
    UIColor *_color;
    double _alpha;
    NSString *_blendMode;
    UIColor *_burnColor;
    UIColor *_darkenColor;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (readonly, copy, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property (readonly, copy, nonatomic, getter=_burnColor) UIColor *burnColor; // @synthesize burnColor=_burnColor;
@property (readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, copy, nonatomic) CAFilter *composedFilter; // @synthesize composedFilter=_composedFilter;
@property (readonly, copy, nonatomic, getter=_darkenColor) UIColor *darkenColor; // @synthesize darkenColor=_darkenColor;
@property (readonly, nonatomic, getter=_inputReversed) BOOL inputReversed; // @synthesize inputReversed=_inputReversed;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly, copy, nonatomic) UIVibrancyEffect *visualEffect;

+ (id)vibrantStylingWithStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)_layerConfig;

@end
