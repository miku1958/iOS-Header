//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString;

@interface ADJingleRequest : NSObject
{
    NSNumber *_token;
    NSData *_responseBody;
    NSDictionary *_responseHeaders;
    NSError *_error;
    long long _statusCode;
    NSString *_DSID;
    CDUnknownBlockType _completionHandler;
    NSString *_bagKey;
    NSData *_requestBody;
    NSMutableDictionary *_requestHeaders;
}

@property (copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property (strong, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property (strong, nonatomic) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property (strong) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property (strong) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property long long statusCode; // @synthesize statusCode=_statusCode;
@property (strong, nonatomic) NSNumber *token; // @synthesize token=_token;

+ (id)incrementToken;
- (void).cxx_destruct;
- (void)handleJingleResponse;
- (id)init:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)send;
- (void)sendJingleRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
