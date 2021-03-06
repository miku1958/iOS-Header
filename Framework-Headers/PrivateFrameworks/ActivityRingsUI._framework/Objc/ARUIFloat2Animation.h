//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingGroupAnimation-Protocol.h>

@class CAMediaTimingFunction, MISSING_TYPE, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation>
{
    double _percent;
    CDUnknownBlockType _applier;
    BOOL _completed;
    id<ARUIRingGroupAnimationDelegate> _delegate;
    double _duration;
    MISSING_TYPE *_startValue;
    MISSING_TYPE *_currentValue;
    MISSING_TYPE *_endValue;
    CAMediaTimingFunction *_timingFunction;
}

@property (readonly, nonatomic) MISSING_TYPE *currentValue; // @synthesize currentValue=_currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) MISSING_TYPE *endValue; // @synthesize endValue=_endValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MISSING_TYPE *startValue; // @synthesize startValue=_startValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

+ (id)animationWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
- (void)completeAnimation;
- (void)dealloc;
- (id)initWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;
- (BOOL)isAnimating;
- (void)update:(double)arg1;

@end

