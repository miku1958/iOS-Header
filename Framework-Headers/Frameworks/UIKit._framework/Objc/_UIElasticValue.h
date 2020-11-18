//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIElasticValue : NSObject
{
    double _currentValue;
    double _targetValue;
    double _speed;
    double _friction;
    double _momentum;
}

@property (nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property (nonatomic) double friction; // @synthesize friction=_friction;
@property (nonatomic) double momentum; // @synthesize momentum=_momentum;
@property (nonatomic) double speed; // @synthesize speed=_speed;
@property (readonly, nonatomic, getter=isSteady) BOOL steady;
@property (nonatomic) double targetValue; // @synthesize targetValue=_targetValue;

- (id)description;
- (id)init;
- (id)initWithValue:(double)arg1;
- (void)update:(double)arg1;
- (void)updateFromDisplayLink:(id)arg1;

@end

