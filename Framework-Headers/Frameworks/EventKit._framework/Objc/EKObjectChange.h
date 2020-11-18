//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObjectID;

@interface EKObjectChange : NSObject
{
    int _changeType;
    EKObjectID *_changedObjectID;
    long long _changeID;
    long long _sequenceNumber;
}

@property (readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property (readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) EKObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
@property (readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

+ (void)callClientResultsHandler:(CDUnknownBlockType)arg1 changesTruncated:(BOOL)arg2 latestToken:(long long)arg3 changes:(id)arg4;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)objectChangeWithProperties:(id)arg1;
+ (CDUnknownBlockType)processFetchResults:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithChangeProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serializedPropertiesForConsumingChange;

@end

