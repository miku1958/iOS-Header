//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURLRequest;

@interface PRSSearchFeedback : PRSFeedback
{
    long long _type;
    NSString *_connectionType;
    NSNumber *_queryId;
    BOOL _cached;
    BOOL _error;
    long long _latency;
    long long _ttfb;
    NSString *_error_code;
    long long _delta_ref;
    long long _delta;
    NSURLRequest *_urlRequest;
    NSArray *_serverStatus;
    long long _responseSize;
    NSDictionary *_client_error;
}

@property (nonatomic) BOOL cached; // @synthesize cached=_cached;
@property (strong, nonatomic) NSDictionary *client_error; // @synthesize client_error=_client_error;
@property (readonly) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property (nonatomic) long long delta; // @synthesize delta=_delta;
@property (nonatomic) long long delta_ref; // @synthesize delta_ref=_delta_ref;
@property (nonatomic) BOOL error; // @synthesize error=_error;
@property (strong, nonatomic) NSString *error_code; // @synthesize error_code=_error_code;
@property (nonatomic) long long latency; // @synthesize latency=_latency;
@property (readonly, nonatomic) NSNumber *queryId; // @synthesize queryId=_queryId;
@property (nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property (strong, nonatomic) NSArray *serverStatus; // @synthesize serverStatus=_serverStatus;
@property (nonatomic) long long ttfb; // @synthesize ttfb=_ttfb;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithFeedback:(id)arg1 type:(long long)arg2;
- (id)initWithInput:(id)arg1 type:(long long)arg2 timestamp:(long long)arg3 connectionType:(id)arg4;
- (id)initWithInput:(id)arg1 type:(long long)arg2 timestamp:(long long)arg3 connectionType:(id)arg4 queryId:(id)arg5;
- (id)plist;
- (id)typeString;
- (void)validate;

@end

