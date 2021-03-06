//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CHRecentCall, NSDate, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CallRecord : NSManagedObject
{
}

@property (strong, nonatomic) NSString *address; // @dynamic address;
@property (copy, nonatomic) NSNumber *answered; // @dynamic answered;
@property (copy, nonatomic) NSNumber *call_category; // @dynamic call_category;
@property (copy, nonatomic) NSNumber *calltype; // @dynamic calltype;
@property (nonatomic) unsigned int chCallStatus;
@property (readonly, nonatomic) long long chHandleType;
@property (readonly, nonatomic) CHRecentCall *chRecentCall;
@property (readonly, copy, nonatomic) NSSet *chRemoteParticipantHandles;
@property (copy, nonatomic) NSDate *date; // @dynamic date;
@property (copy, nonatomic) NSNumber *disconnected_cause; // @dynamic disconnected_cause;
@property (copy, nonatomic) NSNumber *duration; // @dynamic duration;
@property (copy, nonatomic) NSNumber *face_time_data; // @dynamic face_time_data;
@property (copy, nonatomic) NSNumber *filtered_out_reason; // @dynamic filtered_out_reason;
@property (copy, nonatomic) NSNumber *handle_type; // @dynamic handle_type;
@property (copy, nonatomic) NSString *iso_country_code; // @dynamic iso_country_code;
@property (copy, nonatomic) NSNumber *junkConfidence; // @dynamic junkConfidence;
@property (copy, nonatomic) NSUUID *localParticipantUUID; // @dynamic localParticipantUUID;
@property (copy, nonatomic) NSString *location; // @dynamic location;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) NSNumber *number_availability; // @dynamic number_availability;
@property (copy, nonatomic) NSNumber *originated; // @dynamic originated;
@property (copy, nonatomic) NSUUID *outgoingLocalParticipantUUID; // @dynamic outgoingLocalParticipantUUID;
@property (copy, nonatomic) NSNumber *read; // @dynamic read;
@property (strong, nonatomic) NSSet *remoteParticipantHandles; // @dynamic remoteParticipantHandles;
@property (copy, nonatomic) NSString *service_provider; // @dynamic service_provider;
@property (readonly, nonatomic) BOOL supportsCallCategory;
@property (readonly, nonatomic) BOOL supportsHandleType;
@property (readonly, nonatomic) BOOL supportsLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsOutgoingLocalParticipantUUID;
@property (readonly, nonatomic) BOOL supportsRemoteParticipantHandles;
@property (readonly, nonatomic) BOOL supportsServiceProvider;
@property (readonly, nonatomic) BOOL supportsVerificationStatus;
@property (copy, nonatomic) NSString *unique_id; // @dynamic unique_id;
@property (copy, nonatomic) NSNumber *verificationStatus; // @dynamic verificationStatus;

+ (id)fetchRequest;
- (id)compositeCallCategoryForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeJunkConfidenceForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeVerificationStatusForContext:(id)arg1;
- (BOOL)supportsJunkConfidence;

@end

