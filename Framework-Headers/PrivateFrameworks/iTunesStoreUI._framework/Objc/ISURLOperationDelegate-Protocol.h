//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/ISOperationDelegate-Protocol.h>

@class ISURLOperation, NSInputStream, NSMutableData, NSMutableURLRequest, NSNumber, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse;

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional
- (void)operation:(ISURLOperation *)arg1 didDiscoverContentLength:(NSNumber *)arg2;
- (void)operation:(ISURLOperation *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)operation:(ISURLOperation *)arg1 finishedWithOutput:(id)arg2;
- (NSInputStream *)operation:(ISURLOperation *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (BOOL)operation:(ISURLOperation *)arg1 processData:(NSMutableData *)arg2 error:(id *)arg3;
- (NSString *)operation:(ISURLOperation *)arg1 sanitizedStringForString:(NSString *)arg2;
- (void)operation:(ISURLOperation *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (BOOL)operation:(ISURLOperation *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
@end

