//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalendarModel, NSArray, NSDate;
@protocol EKUIAccountRefresherDelegate;

@interface EKUIAccountRefresher : NSObject
{
    CalendarModel *_model;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
    BOOL _refreshing;
    id<EKUIAccountRefresherDelegate> _delegate;
}

@property (readonly, nonatomic) BOOL allAccountsOffline;
@property (weak, nonatomic) id<EKUIAccountRefresherDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL refreshing; // @synthesize refreshing=_refreshing;

- (void).cxx_destruct;
- (BOOL)_allCalendarsRefreshed;
- (BOOL)_allSourcesRefreshed;
- (BOOL)_areAnyCalendarsCurrentlySyncing;
- (BOOL)_areAnySourcesCurrentlySyncing;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncStartTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_eventStoreChanged:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncCompleted;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncStartTimeoutExpired;
- (BOOL)calendarFinishedRefreshing:(id)arg1;
- (id)initWithCalendarModel:(id)arg1;
- (void)refresh;
- (BOOL)sourceFinishedRefreshing:(id)arg1;

@end

