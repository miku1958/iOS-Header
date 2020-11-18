//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADSourceInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
{
}

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseGetLocalSource:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetSources:(CDUnknownBlockType)arg1;
- (void)CADSourceGetConstraints:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;

@end

