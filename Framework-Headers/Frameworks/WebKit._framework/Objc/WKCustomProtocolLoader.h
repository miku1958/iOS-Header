//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSURLConnectionDelegate-Protocol.h>

@class NSString, NSURLConnection;

__attribute__((visibility("hidden")))
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy> _customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithLegacyCustomProtocolManagerProxy:(struct LegacyCustomProtocolManagerProxy *)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3;

@end
