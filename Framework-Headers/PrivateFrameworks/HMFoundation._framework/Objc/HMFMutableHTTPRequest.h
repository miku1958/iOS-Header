//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest
{
}

@property (copy, nonatomic) NSData *body; // @dynamic body;
@property (strong, nonatomic) NSDictionary *headerFields; // @dynamic headerFields;
@property (nonatomic) double timeoutInterval; // @dynamic timeoutInterval;

- (id)initWithInternalRequest:(id)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end

