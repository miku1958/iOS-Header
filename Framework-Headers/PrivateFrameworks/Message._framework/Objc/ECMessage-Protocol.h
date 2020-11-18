//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSCopying-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol ECMailbox, ECMimePart;

@protocol ECMessage <NSCopying, NSObject>

@property (readonly, nonatomic) BOOL answered;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) BOOL conversationMuted;
@property (readonly, nonatomic) BOOL conversationVIP;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, copy, nonatomic) NSArray *from;
@property (readonly, nonatomic) BOOL junk;
@property (readonly, copy, nonatomic) NSArray *listUnsubscribe;
@property (readonly, nonatomic) id<ECMailbox> mailbox;
@property (readonly, nonatomic) id<ECMimePart> messageBody;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) NSArray *to;

@end
