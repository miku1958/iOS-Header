//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface ISDynamicValueFilter : NSObject
{
    BOOL __isPerformingInputChanges;
    double _targetValue;
    double _maximumSpeed;
    double _maximumDeceleration;
    double _outputValue;
    CDUnknownBlockType _outputValueChangeHandler;
    double __speed;
    double __time;
    CADisplayLink *__displayLink;
}

@property (strong, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property (nonatomic, setter=_setPerformingInputChanges:) BOOL _isPerformingInputChanges; // @synthesize _isPerformingInputChanges=__isPerformingInputChanges;
@property (nonatomic, setter=_setSpeed:) double _speed; // @synthesize _speed=__speed;
@property (nonatomic, setter=_setTime:) double _time; // @synthesize _time=__time;
@property (nonatomic) double maximumDeceleration; // @synthesize maximumDeceleration=_maximumDeceleration;
@property (nonatomic) double maximumSpeed; // @synthesize maximumSpeed=_maximumSpeed;
@property (nonatomic, setter=_setOutputValue:) double outputValue; // @synthesize outputValue=_outputValue;
@property (copy, nonatomic) CDUnknownBlockType outputValueChangeHandler; // @synthesize outputValueChangeHandler=_outputValueChangeHandler;
@property (nonatomic) double targetValue; // @synthesize targetValue=_targetValue;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_inputDidChange;
- (void)_update;
- (void)performInputChanges:(CDUnknownBlockType)arg1;
- (void)setVisibilityOffset:(double)arg1;

@end

