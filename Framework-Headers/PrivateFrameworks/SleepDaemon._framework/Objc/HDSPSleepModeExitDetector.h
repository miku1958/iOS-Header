//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepActionObserver-Protocol.h>
#import <SleepDaemon/HDSPWakeDetector-Protocol.h>

@class HDSPEnvironment, NSString;
@protocol HDSPWakeDetectorDelegate;

__attribute__((visibility("hidden")))
@interface HDSPSleepModeExitDetector : NSObject <HDSPSleepActionObserver, HDSPWakeDetector, HDSPEnvironmentAware>
{
    BOOL _isDetecting;
    id<HDSPWakeDetectorDelegate> _wakeDetectorDelegate;
    HDSPEnvironment *_environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long detectionWindowMinutes;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDetecting; // @synthesize isDetecting=_isDetecting;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate; // @synthesize wakeDetectorDelegate=_wakeDetectorDelegate;

- (void).cxx_destruct;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)sleepModeSet:(long long)arg1 source:(id)arg2;
- (void)startDetecting;
- (void)stopDetecting;

@end

