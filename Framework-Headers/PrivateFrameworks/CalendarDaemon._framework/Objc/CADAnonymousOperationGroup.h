//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADAnonymousInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAnonymousOperationGroup : CADOperationGroup <CADAnonymousInterface>
{
}

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
- (void)CADSetConnectionIdentifier:(int)arg1 reply:(CDUnknownBlockType)arg2;

@end

