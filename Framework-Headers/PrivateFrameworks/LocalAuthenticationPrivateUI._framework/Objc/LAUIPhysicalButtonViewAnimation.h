//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, LAUIPhysicalButtonView, NSString;

__attribute__((visibility("hidden")))
@interface LAUIPhysicalButtonViewAnimation : NSObject
{
    LAUIPhysicalButtonView *_physicalButtonView;
    CALayer *_layer;
    NSString *_animationKey;
}

- (void).cxx_destruct;
- (void)addAdditiveAnimation:(id)arg1 to:(id)arg2 keyPath:(id)arg3;
- (void)begin;
- (void)beginWithDelay:(double)arg1;
- (double)duration;
- (void)end;
- (void)endImmediately;
- (id)initWith:(id)arg1 layer:(id)arg2;
- (BOOL)isRunning;
- (void)update;

@end

