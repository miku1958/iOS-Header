//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObjectChange.h>

#import <EventKit/EKOwnerIDProviding-Protocol.h>

@class EKObjectID;

@interface EKRecurrenceChange : EKObjectChange <EKOwnerIDProviding>
{
    EKObjectID *_ownerID;
}

@property (readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;

+ (int)entityType;
+ (void)fetchRecurrenceChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecurrenceChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecurrenceChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;

@end

