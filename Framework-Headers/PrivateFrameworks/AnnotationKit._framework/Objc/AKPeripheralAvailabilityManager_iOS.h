//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKPeripheralAvailabilityManager_iOS : NSObject
{
    struct __IOHIDManager *stylusHidManager;
    unsigned long long _currentAvailability;
}

@property unsigned long long currentAvailability; // @synthesize currentAvailability=_currentAvailability;

+ (BOOL)onlyDrawWithApplePencil;
- (void)dealloc;
- (id)init;
- (void)postConnectionStatusNotification;
- (void)startMonitoringForPeripheralConnection;
- (void)stopMonitoringForPeripheralConnection;
- (void)teardown;

@end

