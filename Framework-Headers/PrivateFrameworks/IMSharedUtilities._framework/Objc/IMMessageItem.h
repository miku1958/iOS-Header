//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString;

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    BOOL _blockingRichLinks;
    BOOL _updatingDataSourcePayload;
    BOOL _backwardsCompatibleVersion;
    unsigned int _error;
    NSString *_subject;
    NSString *_plainBody;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSAttributedString *_body;
    NSData *_bodyData;
    long long _replaceID;
    NSDate *_timeRead;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    long long _expireState;
    NSData *_payloadData;
    NSData *_contactsAvatarRecipeData;
    NSString *_expressiveSendStyleID;
    NSDate *_timeExpressiveSendPlayed;
    NSData *_typingIndicatorIcon;
    NSDictionary *_messageSummaryInfo;
}

@property (nonatomic) BOOL backwardsCompatibleVersion; // @synthesize backwardsCompatibleVersion=_backwardsCompatibleVersion;
@property (nonatomic) BOOL blockingRichLinks; // @synthesize blockingRichLinks=_blockingRichLinks;
@property (strong, nonatomic) NSAttributedString *body; // @synthesize body=_body;
@property (strong, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property (readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
@property (strong, nonatomic) NSData *contactsAvatarRecipeData; // @synthesize contactsAvatarRecipeData=_contactsAvatarRecipeData;
@property (nonatomic) unsigned int errorCode; // @synthesize errorCode=_error;
@property (nonatomic) long long expireState; // @synthesize expireState=_expireState;
@property (strong, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property (strong, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (nonatomic) BOOL hasDataDetectorResults;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isExpirable;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFromExternalSource;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (strong, nonatomic) NSDictionary *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property (strong, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property (strong, nonatomic) NSString *plainBody; // @synthesize plainBody=_plainBody;
@property (nonatomic) long long replaceID; // @synthesize replaceID=_replaceID;
@property (strong, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (strong, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property (strong, nonatomic) NSDate *timeExpressiveSendPlayed; // @synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed;
@property (strong, nonatomic) NSDate *timePlayed; // @synthesize timePlayed=_timePlayed;
@property (strong, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property (strong, nonatomic) NSData *typingIndicatorIcon; // @synthesize typingIndicatorIcon=_typingIndicatorIcon;
@property (nonatomic, getter=isUpdatingDataSourcePayload) BOOL updatingDataSourcePayload; // @synthesize updatingDataSourcePayload=_updatingDataSourcePayload;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDowngraded;

- (void)_clearBodyData;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)adjustIsEmptyFlag;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)copyWithFlags:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned int)arg26 type:(long long)arg27;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromMe;
- (BOOL)isLastMessageCandidate;
- (id)sender;
- (void)setWasDataDetected:(BOOL)arg1;

@end

