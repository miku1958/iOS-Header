//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@interface MCTouchInput : MCKeyboardInput
{
    double _radius;
    double _timestamp;
    struct CGPoint _touchPoint;
}

@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;

- (BOOL)canComposeNew:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3;

@end
