//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest;

@protocol IKNetworkRequestRecord <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long initiatorType;
@property (readonly, nonatomic) long long resourceType;

- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(NSData *)arg2 mimeType:(NSString *)arg3;
- (void)didCompleteLoadingWithResponseBody:(NSData *)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2;
- (void)willSendRequest:(NSURLRequest *)arg1;
@end
