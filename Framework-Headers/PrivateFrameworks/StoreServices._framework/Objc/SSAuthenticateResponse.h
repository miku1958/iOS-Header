//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDictionary, NSError, NSString, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>
{
    SSAccount *_authenticatedAccount;
    long long _authenticateResponseType;
    unsigned long long _credentialSource;
    NSError *_error;
    NSDictionary *_responseDictionary;
}

@property (nonatomic) long long authenticateResponseType; // @synthesize authenticateResponseType=_authenticateResponseType;
@property (strong, nonatomic) SSAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
@property (nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setError:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

