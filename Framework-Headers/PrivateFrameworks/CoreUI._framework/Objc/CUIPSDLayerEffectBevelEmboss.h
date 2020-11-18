//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent
{
    unsigned long long _blurSize;
    unsigned long long _softenSize;
    short _angle;
    unsigned long long _altitude;
    unsigned int _direction;
    int _highlightBlendMode;
    CUIColor *_highlightColor;
    double _highlightOpacity;
    int _shadowBlendMode;
    CUIColor *_shadowColor;
    double _shadowOpacity;
}

@property unsigned long long altitude; // @synthesize altitude=_altitude;
@property short angle; // @synthesize angle=_angle;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
@property unsigned int direction; // @synthesize direction=_direction;
@property int highlightBlendMode; // @synthesize highlightBlendMode=_highlightBlendMode;
@property (strong) CUIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property double highlightOpacity; // @synthesize highlightOpacity=_highlightOpacity;
@property int shadowBlendMode; // @synthesize shadowBlendMode=_shadowBlendMode;
@property (strong) CUIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property unsigned long long softenSize; // @synthesize softenSize=_softenSize;

- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

