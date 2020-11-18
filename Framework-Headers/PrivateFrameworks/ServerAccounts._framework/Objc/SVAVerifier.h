//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerAccounts/NSURLSessionDataDelegate-Protocol.h>
#import <ServerAccounts/NSURLSessionDelegate-Protocol.h>

@class NSArray, NSMutableData, NSString, NSURLSession, NSURLSessionDataTask;

@interface SVAVerifier : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    BOOL _canceledByUser;
    NSString *_serverAddress;
    NSString *_userName;
    NSString *_password;
    NSArray *_trustedCertificates;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_responseData;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) BOOL canceledByUser; // @synthesize canceledByUser=_canceledByUser;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property (strong, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property (strong, nonatomic) NSString *userName; // @synthesize userName=_userName;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataclassPropertiesFromProfilesDictionary:(id)arg1;
- (void)handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serverAccountsErrorForURLSessionError:(id)arg1;
- (void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
