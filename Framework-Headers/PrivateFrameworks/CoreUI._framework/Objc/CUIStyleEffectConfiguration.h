//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    long long _state;
    long long _presentationState;
    long long _value;
    unsigned long long _dimension1;
    NSString *_appearanceName;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
    double _brightnessMultiplier;
    double _effectScale;
    unsigned long long _colorTemperature;
}

@property (copy, nonatomic) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property (nonatomic) double brightnessMultiplier; // @synthesize brightnessMultiplier=_brightnessMultiplier;
@property (nonatomic) unsigned long long colorTemperature; // @synthesize colorTemperature=_colorTemperature;
@property (nonatomic) unsigned long long dimension1; // @synthesize dimension1=_dimension1;
@property (nonatomic) double effectScale; // @synthesize effectScale=_effectScale;
@property (nonatomic) BOOL foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property (nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) BOOL useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property (nonatomic) long long value; // @synthesize value=_value;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;

@end
