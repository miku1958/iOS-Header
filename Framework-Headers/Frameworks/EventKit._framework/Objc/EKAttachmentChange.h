//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObjectChange.h>

#import <EventKit/EKOwnerIDProviding-Protocol.h>

@class EKObjectID;

@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding>
{
    EKObjectID *_ownerID;
}

@property (readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;

+ (int)entityType;
+ (void)fetchAttachmentChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAttachmentChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAttachmentChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;

@end

