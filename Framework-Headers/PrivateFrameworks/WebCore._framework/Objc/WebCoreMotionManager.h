//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocationManager, CMMotionManager, NSTimer;

__attribute__((visibility("hidden")))
@interface WebCoreMotionManager : NSObject
{
    CMMotionManager *m_motionManager;
    CLLocationManager *m_locationManager;
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>> m_deviceMotionClients;
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>> m_deviceOrientationClients;
    NSTimer *m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
}

+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIOS *)arg1;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS *)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (BOOL)gyroAvailable;
- (BOOL)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct DeviceMotionClientIOS *)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS *)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end

