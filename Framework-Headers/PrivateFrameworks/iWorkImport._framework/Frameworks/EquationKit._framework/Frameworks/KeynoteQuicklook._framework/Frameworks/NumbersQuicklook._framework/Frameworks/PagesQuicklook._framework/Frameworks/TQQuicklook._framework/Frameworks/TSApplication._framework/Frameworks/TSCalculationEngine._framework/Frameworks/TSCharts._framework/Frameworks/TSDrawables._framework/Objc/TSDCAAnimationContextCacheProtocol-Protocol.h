//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/NSObject-Protocol.h>

@class NSString, TSDCAAnimationCache;

@protocol TSDCAAnimationContextCacheProtocol <NSObject>
- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)valueForKeyPath:(NSString *)arg1 atTime:(double)arg2 animationCache:(TSDCAAnimationCache *)arg3;
@end
