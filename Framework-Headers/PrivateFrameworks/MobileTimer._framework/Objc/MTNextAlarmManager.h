//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarmManager, NSSet;
@protocol NAScheduler;

@interface MTNextAlarmManager : NSObject
{
    NSSet *_nextAlarms;
    CDUnknownBlockType _updateHandler;
    id<NAScheduler> _serializer;
    MTAlarmManager *_alarmManager;
}

@property (strong, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property (strong, nonatomic) NSSet *nextAlarms; // @synthesize nextAlarms=_nextAlarms;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void).cxx_destruct;
- (void)_handleAlarmsDidChange;
- (void)calculateNextAlarms;
- (id)init;

@end
