//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class MFMailboxUid, MFMessageHeaders, MailAccount;

@interface MFFakeMailMessage : MFMailMessage
{
    MFMailboxUid *_mailbox;
    MFMessageHeaders *_headers;
    MailAccount *_account;
}

@property (strong, nonatomic) MailAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) MFMessageHeaders *headers; // @synthesize headers=_headers;
@property (strong, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;

- (void).cxx_destruct;

@end
