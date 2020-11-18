//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/HKAnimatableObject.h>

@class UIColor, _HKIcon;

@interface _HKRing : HKAnimatableObject
{
    float _percentage;
    double _size;
    double _thickness;
    double _opacity;
    double _zRotation;
    UIColor *_topColor;
    UIColor *_bottomColor;
    _HKIcon *_icon;
    double _topColorRed;
    double _topColorGreen;
    double _topColorBlue;
    double _bottomColorRed;
    double _bottomColorGreen;
    double _bottomColorBlue;
    struct CGPoint _position;
}

@property (strong, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property (readonly, nonatomic) double bottomColorBlue; // @synthesize bottomColorBlue=_bottomColorBlue;
@property (readonly, nonatomic) double bottomColorGreen; // @synthesize bottomColorGreen=_bottomColorGreen;
@property (readonly, nonatomic) double bottomColorRed; // @synthesize bottomColorRed=_bottomColorRed;
@property (strong, nonatomic) _HKIcon *icon; // @synthesize icon=_icon;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (nonatomic) float percentage; // @synthesize percentage=_percentage;
@property (nonatomic) struct CGPoint position; // @synthesize position=_position;
@property (nonatomic) double size; // @synthesize size=_size;
@property (nonatomic) double thickness; // @synthesize thickness=_thickness;
@property (strong, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property (readonly, nonatomic) double topColorBlue; // @synthesize topColorBlue=_topColorBlue;
@property (readonly, nonatomic) double topColorGreen; // @synthesize topColorGreen=_topColorGreen;
@property (readonly, nonatomic) double topColorRed; // @synthesize topColorRed=_topColorRed;
@property (nonatomic) double zRotation; // @synthesize zRotation=_zRotation;

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2;
- (id)init;
- (void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1;
- (void)setCGPointValue:(struct CGPoint)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)setFloatValue:(double)arg1 forRingPropertyType:(unsigned long long)arg2;

@end
