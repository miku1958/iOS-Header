//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID, NSArray, NSDate, NSString, NSTimeZone;

@protocol CADEventInterface
- (void)CADDatabaseActOnSuggestedEvent:(CADObjectID *)arg1 action:(int)arg2 reply:(void (^)(BOOL))arg3;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(void (^)(int, BOOL))arg1;
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(CADObjectID *)arg1 reply:(void (^)(int, NSString *))arg2;
- (void)CADDatabaseGetCountOfNotifiableEvents:(void (^)(int, int))arg1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(void (^)(int, int))arg1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADDatabaseGetEventWithEventIdentifier:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetEventWithUniqueID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(void (^)(int))arg1;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(CADObjectID *)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1;
- (void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(NSString *)arg1 reply:(void (^)(int, BOOL))arg2;
- (void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(NSString *)arg1 reply:(void (^)(int, BOOL))arg2;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(void (^)(int, BOOL))arg1;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheDoEvents:(NSArray *)arg1 haveOccurrencesAfterDate:(NSDate *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(NSArray *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(NSDate *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(NSArray *)arg1 onDay:(NSDate *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(NSString *)arg1 inCalendars:(NSArray *)arg2 responseToken:(int)arg3 reply:(void (^)(int))arg4;
- (void)CADOccurrenceCacheSearchWithTerm:(NSString *)arg1 inCalendars:(NSArray *)arg2 responseToken:(int)arg3 reply:(void (^)(int))arg4;
- (void)CADOccurrencesExistInRangeForEvent:(CADObjectID *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 mustStartInInterval:(BOOL)arg4 timezone:(NSTimeZone *)arg5 reply:(void (^)(int, BOOL))arg6;
@end

