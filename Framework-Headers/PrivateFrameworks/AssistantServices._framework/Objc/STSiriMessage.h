//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSArray, NSDate, NSString, NSURL, STContactAddress;

@interface STSiriMessage : STSiriModelObject
{
    BOOL _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (void)_setSenderInternalGUID:(id)arg1;
- (id)attachmentURL;
- (id)bodyText;
- (id)chatIdentifier;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)groupNameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOutbound;
- (id)recipientAddresses;
- (id)sendDate;
- (id)senderAddress;
- (id)senderInternalGUID;
- (void)setAttachmentURL:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameId:(id)arg1;
- (void)setOutbound:(BOOL)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setSendDate:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setSubjectText:(id)arg1;
- (id)subjectText;

@end
