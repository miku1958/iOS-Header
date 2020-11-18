//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUCrossFadeViewAnimator : NSObject
{
    double _duration;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;

- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(CDUnknownBlockType)arg2;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (void)resetView:(id)arg1;

@end

