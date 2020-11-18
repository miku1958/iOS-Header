//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmClient-Protocol.h>

@class MTAlarmManager, NSString;

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient>
{
    MTAlarmManager *_alarmManager;
}

@property (readonly, weak, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveAlarmServerReadyNotification:(id)arg1;
- (void)alarmDismissed:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmSnoozed:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithAlarmManager:(id)arg1;
- (void)nextAlarmChanged:(id)arg1;

@end

