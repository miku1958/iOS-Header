//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKNotificationInfo, CKRecordZoneID, NSPredicate, NSString;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_subscriptionID;
    long long _subscriptionType;
    CKNotificationInfo *_notificationInfo;
    CKRecordZoneID *_zoneID;
    NSString *_recordType;
    NSPredicate *_predicate;
    unsigned long long _subscriptionOptions;
}

@property (copy, nonatomic) CKNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property (copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property (copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property (nonatomic) unsigned long long subscriptionOptions; // @synthesize subscriptionOptions=_subscriptionOptions;
@property (nonatomic) long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property (copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)_initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_subscriptionOptions;
- (void)_validateSubscriptionOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;

@end

