//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBBiometricMonitorObserver;

@protocol SBBiometricMonitorDataSource <NSObject>

@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal;
@property (readonly, nonatomic) BOOL presenceDetectRunning;

- (void)addObserver:(id<SBBiometricMonitorObserver>)arg1;
- (void)removeObserver:(id<SBBiometricMonitorObserver>)arg1;
@end
