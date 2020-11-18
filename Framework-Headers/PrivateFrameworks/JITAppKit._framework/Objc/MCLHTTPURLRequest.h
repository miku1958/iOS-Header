//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCLURLDataLoaderTask, NSData, NSDictionary, NSError, NSString, NSURL;

@interface MCLHTTPURLRequest : NSObject
{
    MCLURLDataLoaderTask *_task;
    NSURL *_url;
    NSString *_httpMethod;
    NSDictionary *_httpHeaders;
    double _timeout;
    unsigned long long _statusCode;
    NSError *_error;
    NSData *_data;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property (copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property (nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (void)cancel;
- (void)handleCompletion:(id)arg1;
- (id)init;
- (void)loadRequest:(id)arg1;
- (void)send;
- (void)sendData:(id)arg1;
- (void)sendText:(id)arg1;

@end

