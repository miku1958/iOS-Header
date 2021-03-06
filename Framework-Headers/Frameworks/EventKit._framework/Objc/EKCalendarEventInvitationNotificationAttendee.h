//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class NSDate, NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol>
{
    BOOL _statusChanged;
    BOOL _commentChanged;
    BOOL _proposedStartDateChanged;
    BOOL _proposedStartDateDeclined;
    BOOL _isCurrentUser;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    long long _participantStatus;
    NSString *_comment;
    NSDate *_proposedStartDate;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property (readonly, nonatomic) BOOL commentChanged; // @synthesize commentChanged=_commentChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property (readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property (readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (readonly, nonatomic) NSDate *proposedStartDate; // @synthesize proposedStartDate=_proposedStartDate;
@property (readonly, nonatomic) BOOL proposedStartDateChanged; // @synthesize proposedStartDateChanged=_proposedStartDateChanged;
@property (readonly, nonatomic) BOOL proposedStartDateDeclined; // @synthesize proposedStartDateDeclined=_proposedStartDateDeclined;
@property (readonly, nonatomic) BOOL statusChanged; // @synthesize statusChanged=_statusChanged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithParticipant:(id)arg1 forEvent:(id)arg2;

@end

