//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFSASLAuthenticator.h>

@interface _MFLoginAuthenticator : MFSASLAuthenticator
{
    BOOL _justSentPassword;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (id)saslName;

@end
