//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INAlarmSearch, NSArray;

@protocol INDeleteAlarmIntentExport <NSObject, JSExport>

@property (copy, nonatomic) INAlarmSearch *alarmSearch;
@property (copy, nonatomic) NSArray *alarms;

- (id)init;
@end
