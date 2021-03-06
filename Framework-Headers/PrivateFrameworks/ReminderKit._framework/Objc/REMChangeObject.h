//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMChangeCoalesceable-Protocol.h>

@class NSSet, REMChangeTombstone, REMChangeTransaction, REMObjectID;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable>
{
    REMChangeTransaction *_transaction;
    long long _changeID;
    REMObjectID *_changedObjectID;
    long long _changeType;
    REMChangeTombstone *_tombstone;
}

@property (readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property (readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) REMObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
@property (readonly, nonatomic) REMChangeTombstone *tombstone; // @synthesize tombstone=_tombstone;
@property (readonly, weak, nonatomic) REMChangeTransaction *transaction; // @synthesize transaction=_transaction;
@property (readonly, nonatomic) NSSet *updatedProperties;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)coalescedChanges;
- (id)copyForCoalescing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCoalesced;
- (BOOL)isEqual:(id)arg1;

@end

