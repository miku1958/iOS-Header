//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUTileAnimationOptions : NSObject
{
    BOOL _synchronizedWithTransition;
    long long _kind;
    double _delay;
    double _duration;
    double _springDampingRatio;
    double _springMass;
    double _springStiffness;
    long long _springNumberOfOscillations;
    CDUnknownBlockType _customViewAnimatorBlock;
    struct PUDisplayVelocity _initialVelocity;
}

@property (copy, nonatomic) CDUnknownBlockType customViewAnimatorBlock; // @synthesize customViewAnimatorBlock=_customViewAnimatorBlock;
@property (nonatomic) double delay; // @synthesize delay=_delay;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) struct PUDisplayVelocity initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property (nonatomic) long long kind; // @synthesize kind=_kind;
@property (nonatomic) double springDampingRatio; // @synthesize springDampingRatio=_springDampingRatio;
@property (nonatomic) double springMass; // @synthesize springMass=_springMass;
@property (nonatomic) long long springNumberOfOscillations; // @synthesize springNumberOfOscillations=_springNumberOfOscillations;
@property (nonatomic) double springStiffness; // @synthesize springStiffness=_springStiffness;
@property (nonatomic, getter=isSynchronizedWithTransition) BOOL synchronizedWithTransition; // @synthesize synchronizedWithTransition=_synchronizedWithTransition;

- (void).cxx_destruct;

@end

