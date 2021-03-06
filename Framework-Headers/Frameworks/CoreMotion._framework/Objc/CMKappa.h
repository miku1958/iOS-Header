//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMKappaInternal;

@interface CMKappa : NSObject
{
    CMKappaInternal *_internal;
}

@property (readonly, nonatomic) CMKappaInternal *_internal; // @synthesize _internal;

+ (BOOL)areStatsAvailable;
- (void)dealloc;
- (int)getState;
- (id)init;
- (void)sendAPCmd:(int)arg1;
- (void)sendAPConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)sendCmd:(int)arg1;
- (void)sendConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5;
- (void)startKappaUpdatesForItem:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopKappaUpdates;

@end

