//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ManagedConfiguration/NSURLConnectionDataDelegate-Protocol.h>

@class NSArray, NSMutableData, NSString, NSURLConnection;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate>
{
    BOOL _didFailDueToMissingCredentials;
    BOOL _shouldUseResponseBodyAsLoginPrompt;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;
    CDUnknownBlockType _completionBlock;
    id _selfReference;
}

@property (strong, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFailDueToMissingCredentials; // @synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property (strong, nonatomic) id selfReference; // @synthesize selfReference=_selfReference;
@property (nonatomic) BOOL shouldUseResponseBodyAsLoginPrompt; // @synthesize shouldUseResponseBodyAsLoginPrompt=_shouldUseResponseBodyAsLoginPrompt;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (id)init;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
