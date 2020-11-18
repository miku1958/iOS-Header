//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewAnimationComposing-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing>
{
    double _previousInteractiveUpdateTimestamp;
    id _previousInteractiveUpdateValue;
    id<UIVectorOperatable> _previousTarget;
    BOOL _interactive;
    id<UIVectorOperatable> _targetVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UIVectorOperatable> targetVelocity; // @synthesize targetVelocity=_targetVelocity;

- (void).cxx_destruct;
- (id)composeAnimation:(id)arg1 withNewAnimationDescription:(id)arg2 interactive:(BOOL)arg3 currentValue:(id)arg4 targetValueGetter:(CDUnknownBlockType)arg5;
- (id)createAnimationFromDescription:(id)arg1 currentValue:(id)arg2 velocity:(id)arg3 targetValueGetter:(CDUnknownBlockType)arg4;
- (id)init;
- (BOOL)isActive;
- (id)projectValue:(id)arg1 decelerationFactor:(double)arg2;

@end
