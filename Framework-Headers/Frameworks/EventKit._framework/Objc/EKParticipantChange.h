//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObjectChange.h>

@interface EKParticipantChange : EKObjectChange
{
}

+ (int)entityType;
+ (void)fetchParticipantChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchParticipantChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchParticipantChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
