//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject
{
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_cellBroadcastMessageReceived:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)start;

@end

