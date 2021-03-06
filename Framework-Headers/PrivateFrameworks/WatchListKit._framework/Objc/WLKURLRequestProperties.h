//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface WLKURLRequestProperties : NSObject
{
    NSString *_endpoint;
    NSString *_httpMethod;
    NSDictionary *_queryParameters;
    NSDictionary *_headers;
    NSString *_caller;
    NSNumber *_timeout;
    NSNumber *_apiVersion;
    long long _options;
}

@property (copy, nonatomic) NSNumber *apiVersion; // @synthesize apiVersion=_apiVersion;
@property (copy, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property (copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property (copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property (copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property (copy, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;

+ (id)requestPropertiesWithEndpoint:(id)arg1;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(long long)arg8;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
- (void).cxx_destruct;
- (id)URLRequestWithConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end

