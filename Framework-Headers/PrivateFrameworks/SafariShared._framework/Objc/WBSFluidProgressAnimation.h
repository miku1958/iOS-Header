//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _initialPosition;
    double _destinationPosition;
    double _animationDuration;
}

@property (nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property (nonatomic) double destinationPosition; // @synthesize destinationPosition=_destinationPosition;
@property (nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;

@end
