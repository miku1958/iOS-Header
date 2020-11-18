//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

@class NSArray;

@interface RTWiFiManager : RTNotifier
{
    unsigned long long _powerStatus;
    unsigned long long _linkStatus;
    NSArray *_accessPoints;
}

@property (strong, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property (readonly, nonatomic) unsigned long long linkStatus; // @synthesize linkStatus=_linkStatus;
@property (nonatomic) unsigned long long powerStatus; // @synthesize powerStatus=_powerStatus;

+ (Class)classForSharedInstance;
+ (id)linkStatusToString:(unsigned long long)arg1;
+ (id)powerStatusToString:(unsigned long long)arg1;
+ (id)sharedInstance;
+ (id)supportedNotificationNames;
- (void).cxx_destruct;
- (void)_cancelScan;
- (void)_notifyScanResults:(id)arg1;
- (void)_scheduleScan;
- (void)_setup;
- (void)_shutdown;
- (void)cancelScan;
- (void)fetchLinkStatus:(CDUnknownBlockType)arg1;
- (void)fetchPowerStatus:(CDUnknownBlockType)arg1;
- (id)init;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)scheduleScan;
- (void)setup;
- (void)shutdown;

@end
