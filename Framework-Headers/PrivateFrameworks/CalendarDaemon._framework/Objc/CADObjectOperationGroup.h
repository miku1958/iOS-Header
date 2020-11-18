//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADObjectInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>
{
}

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
- (void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADObject:(id)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADObjectExists:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADObjectIsManaged:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADObjectsExist:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

