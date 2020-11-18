//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCoding-Protocol.h>
#import <iTunesStore/NSCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSCoding, NSCopying>
{
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

@property (strong) NSData *HTTPBody;
@property (strong) NSInputStream *HTTPBodyStream;
@property (strong) NSString *HTTPMethod;
@property long long URLBagType;
@property (strong) NSArray *URLs;
@property long long allowedRetryCount;
@property (strong) NSString *appleClientApplication;
@property unsigned long long cachePolicy;
@property (strong) NSDictionary *customHeaders;
@property long long expectedContentLength;
@property (readonly) NSURL *primaryURL;
@property (strong) NSDictionary *queryStringDictionary;
@property double timeoutInterval;

+ (id)requestWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)_initCommon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)requestProperties;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;

@end

