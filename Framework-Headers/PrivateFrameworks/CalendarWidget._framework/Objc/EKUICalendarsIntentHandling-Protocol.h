//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarWidget/NSObject-Protocol.h>

@class EKUICalendarsIntent, NSArray;

@protocol EKUICalendarsIntentHandling <NSObject>
- (void)provideCalendarsOptionsCollectionForEKUICalendars:(EKUICalendarsIntent *)arg1 withCompletion:(void (^)(id, NSError *))arg2;

@optional
- (void)confirmEKUICalendars:(EKUICalendarsIntent *)arg1 completion:(void (^)(EKUICalendarsIntentResponse *))arg2;
- (NSArray *)defaultCalendarsForEKUICalendars:(EKUICalendarsIntent *)arg1;
- (void)handleEKUICalendars:(EKUICalendarsIntent *)arg1 completion:(void (^)(EKUICalendarsIntentResponse *))arg2;
- (void)provideCalendarsOptionsForEKUICalendars:(EKUICalendarsIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
@end

