//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString *_handle;
    NSString *_service;
    NSString *_account;
    NSString *_unformattedID;
    NSString *_accountID;
    NSString *_roomName;
    NSDictionary *_senderInfo;
    NSString *_guid;
    NSDate *_time;
    NSString *_countryCode;
    long long _messageID;
    id _context;
    long long _type;
    NSString *_balloonBundleID;
    NSString *_destinationCallerID;
    NSDate *_clientSendTime;
    long long _cloudKitSyncState;
    NSString *_cloudKitRecordID;
    NSData *_cloudKitServerChangeTokenBlob;
    NSString *_cloudKitRecordChangeTag;
    NSString *_parentChatID;
}

@property (strong, nonatomic) NSString *account; // @synthesize account=_account;
@property (strong, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (strong, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
@property (strong, nonatomic) NSDate *clientSendTime; // @synthesize clientSendTime=_clientSendTime;
@property (copy, nonatomic) NSString *cloudKitRecordChangeTag; // @synthesize cloudKitRecordChangeTag=_cloudKitRecordChangeTag;
@property (copy, nonatomic) NSString *cloudKitRecordID; // @synthesize cloudKitRecordID=_cloudKitRecordID;
@property (copy, nonatomic) NSData *cloudKitServerChangeTokenBlob; // @synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob;
@property (nonatomic) long long cloudKitSyncState; // @synthesize cloudKitSyncState=_cloudKitSyncState;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (strong, nonatomic) NSString *destinationCallerID; // @synthesize destinationCallerID=_destinationCallerID;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (strong, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) BOOL isFirstMessageCandidate;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL isLastMessageCandidate;
@property (nonatomic, setter=_setMessageID:) long long messageID; // @synthesize messageID=_messageID;
@property (copy, nonatomic) NSString *parentChatID; // @synthesize parentChatID=_parentChatID;
@property (strong, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (strong, nonatomic) NSString *sender;
@property (strong, nonatomic) NSDictionary *senderInfo; // @synthesize senderInfo=_senderInfo;
@property (strong, nonatomic) NSString *service; // @synthesize service=_service;
@property (strong, nonatomic) NSDate *time; // @synthesize time=_time;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;

+ (Class)classForIMItemType:(long long)arg1;
+ (Class)classForMessageItemDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)associatedMessageGUID;
- (struct _NSRange)associatedMessageRange;
- (long long)associatedMessageType;
- (id)consumedSessionPayloads;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;
- (BOOL)isAssociatedMessageItem;
- (BOOL)isBreadcrumb;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isMessageEdit;
- (BOOL)isOlderThanItem:(id)arg1;
- (BOOL)isSticker;
- (id)pluginSessionGUID;

@end

