//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIIntervalAnimating-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating>
{
    id<UIVectorOperatable> _velocity;
    CDUnknownBlockType _targetValueGetter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType targetValueGetter; // @synthesize targetValueGetter=_targetValueGetter;

- (void).cxx_destruct;
- (id)initWithTargetValueGetter:(CDUnknownBlockType)arg1 velocity:(id)arg2;
- (BOOL)isStable;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (id)value;
- (id)velocity;

@end

