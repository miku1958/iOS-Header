//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_accountIdentifier;
    NSString *_bundleID;
    NSNumber *_externalPriority;
    NSNumber *_itemID;
    NSString *_jobState;
    NSString *_jobType;
    NSError *_lastError;
    NSNumber *_lastSoftFailureTimestamp;
    NSNumber *_priority;
    NSNumber *_priorityBucket;
    NSString *_skippedReason;
    long long _softFailureCount;
    NSNumber *_softFailureTimeout;
    NSNumber *_timestamp;
}

@property (copy) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (copy) NSNumber *externalPriority; // @synthesize externalPriority=_externalPriority;
@property (copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property (copy) NSString *jobState; // @synthesize jobState=_jobState;
@property (copy) NSString *jobType; // @synthesize jobType=_jobType;
@property (copy) NSError *lastError; // @synthesize lastError=_lastError;
@property (copy) NSNumber *lastSoftFailureTimestamp; // @synthesize lastSoftFailureTimestamp=_lastSoftFailureTimestamp;
@property (copy) NSNumber *priority; // @synthesize priority=_priority;
@property (copy) NSNumber *priorityBucket; // @synthesize priorityBucket=_priorityBucket;
@property (copy) NSString *skippedReason; // @synthesize skippedReason=_skippedReason;
@property (nonatomic) long long softFailureCount; // @synthesize softFailureCount=_softFailureCount;
@property (copy) NSNumber *softFailureTimeout; // @synthesize softFailureTimeout=_softFailureTimeout;
@property (copy) NSNumber *timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

