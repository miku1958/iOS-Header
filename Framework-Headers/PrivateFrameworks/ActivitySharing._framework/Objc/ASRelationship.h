//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>
#import <ActivitySharing/NSCopying-Protocol.h>
#import <ActivitySharing/NSSecureCoding-Protocol.h>

@class ASCodableRelationship, CKRecord, CKRecordID, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface ASRelationship : NSObject <ASCloudKitCodable, NSCopying, NSSecureCoding>
{
    BOOL _isFriendshipActive;
    BOOL _isMuteEnabled;
    BOOL _hasIncomingInviteRequest;
    BOOL _hasOutgoingInviteRequest;
    BOOL _isAwaitingInviteResponse;
    BOOL _isHidingActivityData;
    BOOL _sentInviteResponse;
    long long _version;
    NSUUID *_UUID;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_cloudKitAddress;
    NSSet *_addresses;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    CKRecord *_systemFieldsOnlyRecord;
    CKRecordID *_relationshipShareID;
    CKRecordID *_remoteRelationshipShareID;
    CKRecordID *_remoteActivityDataShareID;
    NSArray *_relationshipEvents;
    NSDate *_dateForLatestDataHidden;
    NSDate *_dateForLatestOutgoingInviteRequest;
    NSDate *_dateForLatestRelationshipStart;
    NSDate *_dateActivityDataInitiallyBecameVisible;
}

@property (copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (copy, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property (copy, nonatomic) NSString *cloudKitAddress; // @synthesize cloudKitAddress=_cloudKitAddress;
@property (readonly, nonatomic) ASCodableRelationship *codableRelationship;
@property (readonly, nonatomic) unsigned long long currentRelationshipEventAnchor;
@property (strong, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible; // @synthesize dateActivityDataInitiallyBecameVisible=_dateActivityDataInitiallyBecameVisible;
@property (strong, nonatomic) NSDate *dateForLatestDataHidden; // @synthesize dateForLatestDataHidden=_dateForLatestDataHidden;
@property (strong, nonatomic) NSDate *dateForLatestOutgoingInviteRequest; // @synthesize dateForLatestOutgoingInviteRequest=_dateForLatestOutgoingInviteRequest;
@property (strong, nonatomic) NSDate *dateForLatestRelationshipStart; // @synthesize dateForLatestRelationshipStart=_dateForLatestRelationshipStart;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIncomingInviteRequest; // @synthesize hasIncomingInviteRequest=_hasIncomingInviteRequest;
@property (nonatomic) BOOL hasOutgoingInviteRequest; // @synthesize hasOutgoingInviteRequest=_hasOutgoingInviteRequest;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *incomingHandshakeToken; // @synthesize incomingHandshakeToken=_incomingHandshakeToken;
@property (readonly, nonatomic) BOOL isActivityDataVisible;
@property (nonatomic) BOOL isAwaitingInviteResponse; // @synthesize isAwaitingInviteResponse=_isAwaitingInviteResponse;
@property (nonatomic) BOOL isFriendshipActive; // @synthesize isFriendshipActive=_isFriendshipActive;
@property (readonly, nonatomic) BOOL isHidingActivityData; // @synthesize isHidingActivityData=_isHidingActivityData;
@property (nonatomic) BOOL isMuteEnabled; // @synthesize isMuteEnabled=_isMuteEnabled;
@property (copy, nonatomic) NSString *outgoingHandshakeToken; // @synthesize outgoingHandshakeToken=_outgoingHandshakeToken;
@property (copy, nonatomic) NSString *preferredReachableAddress; // @synthesize preferredReachableAddress=_preferredReachableAddress;
@property (copy, nonatomic) NSString *preferredReachableService; // @synthesize preferredReachableService=_preferredReachableService;
@property (copy, nonatomic) NSArray *relationshipEvents; // @synthesize relationshipEvents=_relationshipEvents;
@property (copy, nonatomic) CKRecordID *relationshipShareID; // @synthesize relationshipShareID=_relationshipShareID;
@property (copy, nonatomic) CKRecordID *remoteActivityDataShareID; // @synthesize remoteActivityDataShareID=_remoteActivityDataShareID;
@property (copy, nonatomic) CKRecordID *remoteRelationshipShareID; // @synthesize remoteRelationshipShareID=_remoteRelationshipShareID;
@property (nonatomic) BOOL sentInviteResponse; // @synthesize sentInviteResponse=_sentInviteResponse;
@property (readonly) Class superclass;
@property (copy, nonatomic) CKRecord *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property (readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (void)_relationshipWithRecord:(id)arg1 relationshipEventRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)relationshipWithCodableRelationship:(id)arg1;
+ (id)relationshipsWithRelationshipAndEventRecords:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clearRelationshipState;
- (id)_mostRecentEventsWithCount:(long long)arg1;
- (unsigned long long)_nextAnchor;
- (void)_updateCurrentRelationshipState;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)arg1;
- (void)_updateDateFriendshipBeganWithDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertEventWithType:(long long)arg1;
- (void)insertEvents:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRelationship:(id)arg1;
- (id)recordWithZoneID:(id)arg1;
- (id)relationshipSnapshotForDate:(id)arg1;
- (id)relationshipWithConsolidatedEvents;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
