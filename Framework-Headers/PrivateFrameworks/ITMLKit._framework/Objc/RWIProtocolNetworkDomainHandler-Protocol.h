//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString, RWIProtocolNetworkHeaders;

@protocol RWIProtocolNetworkDomainHandler <NSObject>

@optional
- (void)addInterceptionWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 url:(NSString *)arg3 stage:(long long)arg4 caseSensitive:(BOOL *)arg5 isRegex:(BOOL *)arg6;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)getResponseBodyWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, BOOL))arg2 requestId:(NSString *)arg3;
- (void)getSerializedCertificateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 requestId:(NSString *)arg3;
- (void)interceptContinueWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 requestId:(NSString *)arg3 stage:(long long)arg4;
- (void)interceptRequestWithErrorWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 requestId:(NSString *)arg3 errorType:(long long)arg4;
- (void)interceptRequestWithResponseWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 requestId:(NSString *)arg3 content:(NSString *)arg4 base64Encoded:(BOOL)arg5 mimeType:(NSString *)arg6 status:(int)arg7 statusText:(NSString *)arg8 headers:(RWIProtocolNetworkHeaders *)arg9;
- (void)interceptWithRequestWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 requestId:(NSString *)arg3 url:(id *)arg4 method:(id *)arg5 headers:(id *)arg6 postData:(id *)arg7;
- (void)interceptWithResponseWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 requestId:(NSString *)arg3 content:(NSString *)arg4 base64Encoded:(BOOL)arg5 mimeType:(id *)arg6 status:(int *)arg7 statusText:(id *)arg8 headers:(id *)arg9;
- (void)loadResourceWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, NSString *, int))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4;
- (void)removeInterceptionWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 url:(NSString *)arg3 stage:(long long)arg4 caseSensitive:(BOOL *)arg5 isRegex:(BOOL *)arg6;
- (void)resolveWebSocketWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolRuntimeRemoteObject *))arg2 requestId:(NSString *)arg3 objectGroup:(id *)arg4;
- (void)setExtraHTTPHeadersWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 headers:(RWIProtocolNetworkHeaders *)arg3;
- (void)setInterceptionEnabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 enabled:(BOOL)arg3;
- (void)setResourceCachingDisabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 disabled:(BOOL)arg3;
@end

