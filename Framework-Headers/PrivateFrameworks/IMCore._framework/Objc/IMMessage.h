//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>

@class IMHandle, IMMessageItem, NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface IMMessage : NSObject <NSCopying>
{
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSString *_plainBody;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timeRead;
    NSDate *_timePlayed;
    NSString *_guid;
    NSAttributedString *_messageSubject;
    NSArray *_fileTransferGUIDs;
    NSError *_error;
    unsigned long long _flags;
    BOOL _isInvitationMessage;
    long long _messageID;
}

@property (readonly, strong, nonatomic) IMMessageItem *_imMessageItem;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (readonly, nonatomic) BOOL hasDataDetectorResults;
@property (readonly, nonatomic) BOOL hasInlineAttachments;
@property (readonly, strong, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property (readonly, nonatomic) BOOL isAddressedToMe;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (readonly, nonatomic) BOOL isDelayed;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isInvitationMessage; // @synthesize isInvitationMessage=_isInvitationMessage;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (nonatomic) long long messageID; // @synthesize messageID=_messageID;
@property (readonly, strong, nonatomic) NSAttributedString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property (readonly, strong, nonatomic) NSString *plainBody;
@property (strong, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property (readonly, strong, nonatomic) NSString *senderName;
@property (readonly, strong, nonatomic) IMHandle *subject; // @synthesize subject=_subject;
@property (readonly, strong, nonatomic) NSString *summaryString;
@property (strong, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property (strong, nonatomic) NSDate *time; // @synthesize time=_time;
@property (strong, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property (strong, nonatomic) NSDate *timePlayed; // @synthesize timePlayed=_timePlayed;
@property (strong, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDowngraded;

+ (id)_vCardDataWithCLLocation:(id)arg1;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)locatingMessageWithGuid:(id)arg1 error:(id)arg2;
+ (id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4;
+ (id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14;
- (void)_updateError:(id)arg1;
- (void)_updateFileTransferGUIDs:(id)arg1;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)_updateGUID:(id)arg1;
- (void)_updateMessageID:(long long)arg1;
- (void)_updateSender:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)_updateTime:(id)arg1;
- (void)_updateTimeDelivered:(id)arg1;
- (void)_updateTimePlayed:(id)arg1;
- (void)_updateTimeRead:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 comparisonType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (BOOL)isEqual:(id)arg1;
- (void)setIsAddressedToMe:(BOOL)arg1;

@end

