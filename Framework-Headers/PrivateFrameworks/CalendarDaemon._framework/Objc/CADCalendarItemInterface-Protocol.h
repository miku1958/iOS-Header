//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID, NSPredicate, NSString;

@protocol CADCalendarItemInterface
- (void)CADDatabaseAddContactWithIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(int, int))arg3;
- (void)CADDatabaseExportCalendarItemAsICS:(CADObjectID *)arg1 reply:(void (^)(int, NSData *))arg2;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(NSPredicate *)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(NSArray *, int))arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(NSString *)arg1 inCalendar:(CADObjectID *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(CADObjectID *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADDatabaseRemoveContactIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
@end

