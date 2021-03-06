//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BKDevicePearlDelegate-Protocol.h>
#import <SpringBoard/SBBiometricMonitorDataSource-Protocol.h>
#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>

@class BKDevicePearl, NSHashTable, NSString;

@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource>
{
    BKDevicePearl *_pearlDevice;
    NSHashTable *_observers;
    BOOL _matching;
    BOOL _faceDetecting;
    BOOL _poseIsMarginal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal;
@property (readonly, nonatomic) BOOL presenceDetectRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forEachObserver:(CDUnknownBlockType)arg1;
- (void)_setFaceDetecting:(BOOL)arg1;
- (void)_setMatching:(BOOL)arg1;
- (void)_setPoseIsMarginal:(BOOL)arg1;
- (void)_updateFaceDetecting;
- (void)_updateMatching;
- (void)addObserver:(id)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)dealloc;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (id)init;
- (id)initWithPearlDevice:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

