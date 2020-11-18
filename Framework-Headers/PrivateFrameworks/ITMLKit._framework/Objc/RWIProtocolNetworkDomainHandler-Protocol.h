//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString, RWIProtocolNetworkHeaders;

@protocol RWIProtocolNetworkDomainHandler <NSObject>
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)getResponseBodyWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, BOOL))arg2 requestId:(NSString *)arg3;
- (void)loadResourceWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, NSString *, int))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4;
- (void)resolveWebSocketWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolRuntimeRemoteObject *))arg2 requestId:(NSString *)arg3 objectGroup:(id *)arg4;
- (void)setExtraHTTPHeadersWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 headers:(RWIProtocolNetworkHeaders *)arg3;
- (void)setResourceCachingDisabledWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 disabled:(BOOL)arg3;
@end

