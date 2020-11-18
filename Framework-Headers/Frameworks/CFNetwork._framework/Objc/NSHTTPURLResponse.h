//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLResponse.h>

@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse
{
    NSHTTPURLResponseInternal *_httpInternal;
}

@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly) long long statusCode;

+ (BOOL)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;
- (id)_peerCertificateChain;
- (struct __SecTrust *)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;

@end

