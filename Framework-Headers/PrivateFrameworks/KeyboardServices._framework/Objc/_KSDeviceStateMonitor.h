//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _KSDeviceStateMonitor : NSObject
{
    BOOL _isContentProtectionAvailable;
}

@property (nonatomic) BOOL isContentProtectionAvailable; // @synthesize isContentProtectionAvailable=_isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;
- (void)dealloc;
- (id)init;
- (BOOL)isDataAvailableForClassC;

@end
