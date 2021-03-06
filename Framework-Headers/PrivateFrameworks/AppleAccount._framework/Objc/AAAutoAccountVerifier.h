//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/MSSearchDelegate-Protocol.h>

@class ACAccount, MSSearch, NSOperationQueue, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate>
{
    MSSearch *_search;
    NSOperationQueue *_requesterQueue;
    ACAccount *_account;
    CDUnknownBlockType _handler;
    int _attempts;
    BOOL _canceled;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resendVerificationEmailForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateToken:(id)arg1;
- (void)_verify;
- (void)cancel;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;

@end

