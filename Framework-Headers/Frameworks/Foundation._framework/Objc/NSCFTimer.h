//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTimer.h>

__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (unsigned long long)_cfTypeID;
- (BOOL)allowsWeakReference;
- (void)fire;
- (id)fireDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)setFireDate:(id)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

@end

