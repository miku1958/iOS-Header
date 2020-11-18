//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>

@class EKEventStore, NSString, SGSqlEntityStore;

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver>
{
    EKEventStore *_externalEKStore;
    SGSqlEntityStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

+ (id)defaultEKStore;
- (void).cxx_destruct;
- (void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3 commit:(BOOL)arg4;
- (BOOL)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id *)arg3;
- (id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2;
- (BOOL)_isEKEventFromNLEventsCalendar:(id)arg1 ekStore:(id)arg2;
- (BOOL)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2;
- (void)_removeEKEvent:(id)arg1 store:(id)arg2 commit:(BOOL)arg3;
- (void)_removeEvent:(id)arg1 commit:(BOOL)arg2;
- (BOOL)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id *)arg4;
- (void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3;
- (void)_updateEventMetadataInModifiedEvent:(id)arg1 withExistingCheckInShortcutInOriginalEvent:(id)arg2 ifTeamIdentifierIsDifferentInStorageEvent:(id)arg3;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 commit:(BOOL)arg2;
- (void)addEvents:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvent:(id)arg1 commit:(BOOL)arg2;
- (void)cancelEvents:(id)arg1;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (id)ekStore;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2;
- (void)orphanEvent:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;

@end
