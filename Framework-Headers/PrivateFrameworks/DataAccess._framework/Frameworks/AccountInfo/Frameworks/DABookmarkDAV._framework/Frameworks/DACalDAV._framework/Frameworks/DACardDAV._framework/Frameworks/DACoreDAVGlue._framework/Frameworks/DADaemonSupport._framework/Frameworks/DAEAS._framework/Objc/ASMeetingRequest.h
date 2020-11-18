//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASEvent.h>

#import <DAEAS/ASParsingAcceptingTopLevelLeaves-Protocol.h>
#import <DAEAS/NSSecureCoding-Protocol.h>

@class ASEmailItem, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>
{
    int _meetingClassType;
    int _meetingMessageType;
    NSNumber *_instanceType;
    NSDate *_dateReceived;
    NSDate *_recurrenceId;
    NSString *_cachedParentFolderId;
    NSString *_cachedParentServerId;
    NSString *_sender;
    NSArray *_forwardees;
    NSMutableDictionary *_placeHolder;
    ASEmailItem *_parentEmailItem;
}

@property (strong, nonatomic) NSString *cachedParentFolderId; // @synthesize cachedParentFolderId=_cachedParentFolderId;
@property (strong, nonatomic) NSString *cachedParentServerId; // @synthesize cachedParentServerId=_cachedParentServerId;
@property (strong, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property (strong, nonatomic) NSArray *forwardees; // @synthesize forwardees=_forwardees;
@property (strong, nonatomic) NSNumber *instanceType; // @synthesize instanceType=_instanceType;
@property (nonatomic) int meetingClassType; // @synthesize meetingClassType=_meetingClassType;
@property (nonatomic) int meetingMessageType; // @synthesize meetingMessageType=_meetingMessageType;
@property (weak, nonatomic) ASEmailItem *parentEmailItem; // @synthesize parentEmailItem=_parentEmailItem;
@property (strong, nonatomic) NSMutableDictionary *placeHolder; // @synthesize placeHolder=_placeHolder;
@property (strong, nonatomic) NSDate *recurrenceId; // @synthesize recurrenceId=_recurrenceId;
@property (strong, nonatomic) NSString *sender; // @synthesize sender=_sender;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_bailIfNotNewestDataForAccount:(id)arg1;
- (void)_determineSelfnessWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (void)_setReminderSecsBefore:(id)arg1;
- (void)applyPlaceHolder;
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1;
- (void)clearPlaceHolder;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (void)saveEmailServerIdAndUpdateNotificationToRecord:(void *)arg1 account:(id)arg2;
- (BOOL)saveEmailServerIdToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 account:(id)arg3;
- (BOOL)saveForwardeesToCalendarWithExistingRecord:(void *)arg1;
- (BOOL)saveResponseCommentToCalendarWithExistingRecord:(void *)arg1;
- (BOOL)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (void)setDTStamp:(id)arg1;
- (void)setExceptionDate:(id)arg1;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)setOrganizer:(id)arg1;
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2;
- (void)takeValuesFromParentEmailForAccount:(id)arg1;
- (id)unactionableICSRepresentationForAccount:(id)arg1;
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg1 defaultCalendar:(void *)arg2 account:(id)arg3;

@end

