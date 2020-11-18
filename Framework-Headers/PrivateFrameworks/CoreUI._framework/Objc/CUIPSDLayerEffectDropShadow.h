//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    short _angle;
    unsigned long long _distance;
    unsigned long long _blurSize;
    unsigned long long _spread;
}

@property short angle; // @synthesize angle=_angle;
@property int blendMode; // @synthesize blendMode=_blendMode;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
@property (strong) CUIColor *color; // @synthesize color=_color;
@property unsigned long long distance; // @synthesize distance=_distance;
@property double opacity; // @synthesize opacity=_opacity;
@property unsigned long long spread; // @synthesize spread=_spread;

- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

