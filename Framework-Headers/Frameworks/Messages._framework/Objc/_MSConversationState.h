//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class MSMessage, NSArray, NSString, NSUUID;

@interface _MSConversationState : NSObject <NSSecureCoding>
{
    NSUUID *_conversationIdentifier;
    NSUUID *_senderIdentifier;
    NSArray *_recipientIdentifiers;
    NSString *_conversationID;
    MSMessage *_activeMessage;
}

@property (strong, nonatomic) MSMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
@property (strong, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property (strong, nonatomic) NSUUID *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property (strong, nonatomic) NSArray *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
@property (strong, nonatomic) NSUUID *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

