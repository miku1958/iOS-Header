//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UITimingCurveProvider-Protocol.h>

@class UISpringTimingParameters, _UIViewCubicTimingFunction;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider>
{
    long long _timingCurveType;
    _UIViewCubicTimingFunction *_timingFunction;
    long long _animationCurve;
    UISpringTimingParameters *_springTimingParameters;
}

@property (readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property (readonly, nonatomic) struct CGPoint controlPoint1;
@property (readonly, nonatomic) struct CGPoint controlPoint2;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (strong, nonatomic) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters=_springTimingParameters;
@property (readonly, nonatomic) long long timingCurveType; // @synthesize timingCurveType=_timingCurveType;
@property (readonly, nonatomic) _UIViewCubicTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;
- (id)_mediaTimingFunction;
- (void)_setAnimationCurve:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAnimationCurve:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)initWithCustomCurve:(id)arg1;

@end

