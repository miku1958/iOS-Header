//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSData, NSHTTPURLResponse, NSString, NSURL, SSMetricsPageEvent;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding>
{
    NSData *_bodyData;
    SSMetricsPageEvent *_metricsPageEvent;
    NSHTTPURLResponse *_urlResponse;
}

@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_urlResponse;
@property (readonly, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property (readonly, nonatomic) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long expectedContentLength;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property (readonly, nonatomic) BOOL ssv_isExpiredResponse;
@property (readonly, nonatomic) NSString *storeCorrelationID;
@property (readonly, nonatomic) NSString *suggestedFilename;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textEncodingName;

- (id)allHeaderFields;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)statusCode;

@end

