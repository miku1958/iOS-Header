//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPrivacyManager : NSObject
{
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}

- (void)_fireRecentsClearedNotification;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_locationServicesStateChanged;
- (void)dealloc;
- (id)init;

@end

