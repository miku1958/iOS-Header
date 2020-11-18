//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerGlow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    unsigned long long _blurSize;
}

@property int blendMode; // @synthesize blendMode=_blendMode;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
@property (strong) CUIColor *color; // @synthesize color=_color;
@property double opacity; // @synthesize opacity=_opacity;

- (void)dealloc;
- (id)description;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

