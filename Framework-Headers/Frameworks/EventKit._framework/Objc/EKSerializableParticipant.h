//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableParticipant : EKSerializableObject
{
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_url;
    long long _participantRole;
    long long _participantStatus;
    long long _participantType;
}

@property (copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property (nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property (nonatomic) long long participantType; // @synthesize participantType=_participantType;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)classesForKey;
- (void).cxx_destruct;
- (id)createAttendee:(id *)arg1;
- (id)initWithParticipant:(id)arg1;

@end

