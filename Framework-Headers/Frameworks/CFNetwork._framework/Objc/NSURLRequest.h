//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSMutableCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal *_internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, strong) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) double timeoutInterval;

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (BOOL)supportsSecureCoding;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (struct _CFURLRequest *)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (double)_payloadTransmissionTimeout;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (BOOL)_requiresShortConnectionTimeout;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)boundInterfaceIdentifier;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueForHTTPHeaderField:(id)arg1;

@end

