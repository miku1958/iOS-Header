//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADDatabaseInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
{
}

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;
- (void)CADDatabaseCommitWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseIsAutomaticLocationGeocodingAllowed:(CDUnknownBlockType)arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSaveWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetAutomaticLocationGeocodingAllowed:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseSetInitializationOptions:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseSetSourceAccountManagement:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)_CADDatabaseCanModifyCalendarDatabase;

@end

