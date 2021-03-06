//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadConfirmation-Protocol.h>

@class NSString, _INPBSelectionItem;

@interface _INPBPayloadConfirmation : PBCodable <_INPBPayloadConfirmation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int sendAnnouncementIntentAnnouncementConfirmationReason:1;
        unsigned int startCallIntentContactsConfirmationReason:1;
        unsigned int reason:1;
        unsigned int addTasksIntentTargetTaskListConfirmationReason:1;
    } _has;
    int _sendAnnouncementIntentAnnouncementConfirmationReason;
    int _startCallIntentContactsConfirmationReason;
    int _reason;
    int _addTasksIntentTargetTaskListConfirmationReason;
    _INPBSelectionItem *_confirmationItem;
}

@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason; // @synthesize addTasksIntentTargetTaskListConfirmationReason=_addTasksIntentTargetTaskListConfirmationReason;
@property (strong, nonatomic) _INPBSelectionItem *confirmationItem; // @synthesize confirmationItem=_confirmationItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAddTasksIntentTargetTaskListConfirmationReason;
@property (readonly, nonatomic) BOOL hasConfirmationItem;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) BOOL hasStartCallIntentContactsConfirmationReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) int sendAnnouncementIntentAnnouncementConfirmationReason; // @synthesize sendAnnouncementIntentAnnouncementConfirmationReason=_sendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) int startCallIntentContactsConfirmationReason; // @synthesize startCallIntentContactsConfirmationReason=_startCallIntentContactsConfirmationReason;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(id)arg1;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)arg1;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (id)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)arg1;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

