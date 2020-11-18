//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject
{
    float _fraction;
    UIColor *_color;
    CAMediaTimingFunction *_timingFunction;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) float fraction; // @synthesize fraction=_fraction;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;

@end
