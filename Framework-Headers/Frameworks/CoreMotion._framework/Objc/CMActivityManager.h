//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMActivityManager : NSObject
{
    id _internal;
}

@property (readonly, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;
@property (copy) CDUnknownBlockType activityHandler;

- (void)dealloc;
- (id)init;
- (long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2;
- (long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2;
- (long long)simulateMotionStateYouthWithState:(long long)arg1;

@end

