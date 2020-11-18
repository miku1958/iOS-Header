//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMessageInfo : NSObject
{
    unsigned int _flagged:1;
    unsigned int _read:1;
    unsigned int _deleted:1;
    unsigned int _uidIsLibraryID:1;
    unsigned int _hasAttachments:1;
    unsigned int _isVIP:1;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _mailboxID;
    long long _conversationHash;
    long long _generationNumber;
    long long _messageID;
}

@property (nonatomic) long long conversationHash; // @synthesize conversationHash=_conversationHash;
@property (nonatomic) unsigned int dateReceivedInterval; // @synthesize dateReceivedInterval=_dateReceivedInterval;
@property (nonatomic) unsigned int dateSentInterval; // @synthesize dateSentInterval=_dateSentInterval;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL flagged;
@property (readonly, nonatomic) long long generationNumber; // @synthesize generationNumber=_generationNumber;
@property (nonatomic) BOOL isVIP;
@property (nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property (nonatomic) unsigned int mailboxID; // @synthesize mailboxID=_mailboxID;
@property (nonatomic) long long messageID; // @synthesize messageID=_messageID;
@property (nonatomic) BOOL read;
@property (nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property (nonatomic) BOOL uidIsLibraryID;

+ (long long)newGenerationNumber;
- (id)description;
- (long long)generationCompare:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned int)arg4 dateSentInterval:(unsigned int)arg5 conversationHash:(long long)arg6 read:(BOOL)arg7 knownToHaveAttachments:(BOOL)arg8 flagged:(BOOL)arg9 isVIP:(BOOL)arg10;
- (BOOL)isEqual:(id)arg1;

@end
