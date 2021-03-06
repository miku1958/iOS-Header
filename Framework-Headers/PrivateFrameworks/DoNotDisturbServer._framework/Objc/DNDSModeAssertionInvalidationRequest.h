//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModernAssertionSourceResolution-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>

@class DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, DNDSModeAssertionInvalidationPredicate, NSDate, NSString, NSUUID;

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying>
{
    NSUUID *_UUID;
    DNDSModeAssertionInvalidationPredicate *_predicate;
    NSDate *_requestDate;
    DNDModeAssertionInvalidationDetails *_details;
    DNDModeAssertionSource *_source;
    unsigned long long _reason;
    unsigned long long _reasonOverride;
}

@property (readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details; // @synthesize details=_details;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) unsigned long long reasonOverride; // @synthesize reasonOverride=_reasonOverride;
@property (readonly, copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source; // @synthesize source=_source;
@property (readonly) Class superclass;

+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;
+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(unsigned long long)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(unsigned long long)arg6 reasonOverride:(unsigned long long)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

@end

