//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SOAuthorizationParametersCore : NSObject
{
    BOOL _useInternalExtensions;
    NSString *_operation;
    NSURL *_url;
    NSDictionary *_httpHeaders;
    NSData *_httpBody;
    NSData *_auditTokenData;
    long long _responseCode;
}

@property (strong, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
@property (strong, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property (strong, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property (copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property (nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;
@property (nonatomic) BOOL useInternalExtensions; // @synthesize useInternalExtensions=_useInternalExtensions;

- (void).cxx_destruct;
- (id)init;

@end

