//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface NNMKRequestContext : NSObject
{
    BOOL _hasProtectedMessages;
    NSArray *_mailboxes;
    NSString *_conversationId;
    NSDate *_beforeDate;
    unsigned long long _count;
    unsigned long long _resendInterval;
    unsigned long long _messagesForSpecialMailbox;
}

@property (strong, nonatomic) NSDate *beforeDate; // @synthesize beforeDate=_beforeDate;
@property (strong, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property (nonatomic) unsigned long long count; // @synthesize count=_count;
@property (nonatomic) BOOL hasProtectedMessages; // @synthesize hasProtectedMessages=_hasProtectedMessages;
@property (strong, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property (nonatomic) unsigned long long messagesForSpecialMailbox; // @synthesize messagesForSpecialMailbox=_messagesForSpecialMailbox;
@property (nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;

- (void).cxx_destruct;

@end

