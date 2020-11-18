//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLProtocolClient-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient>
{
    struct URLProtocolClient *_cf;
    struct URLProtocol *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge *_cfChallenge;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (struct _CFURLAuthChallenge *)cfChallenge;
- (id)challenge;
- (void)dealloc;
- (id)initWithCFClient:(struct URLProtocolClient *)arg1 prot:(struct URLProtocol *)arg2;
- (void)teardown;
- (void)withCustomProtocolScheduling:(CDUnknownBlockType)arg1;

@end

