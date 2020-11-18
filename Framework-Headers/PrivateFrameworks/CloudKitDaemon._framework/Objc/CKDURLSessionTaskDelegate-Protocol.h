//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSObject, NSOperationQueue, NSString, NSURLRequest, NSURLResponse, NSURLSessionDataTask, NSURLSessionTask;
@protocol OS_voucher;

@protocol CKDURLSessionTaskDelegate <NSObject>

@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) NSObject<OS_voucher> *voucher;

- (void)URLSessionDataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)URLSessionDataTask:(NSURLSessionDataTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)URLSessionTask:(NSURLSessionTask *)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (void)URLSessionTask:(NSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSessionTask:(NSURLSessionTask *)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(NSURLSessionTask *)arg1 needNewBodyStream:(void (^)(NSInputStream *))arg2;
- (NSURLRequest *)URLSessionTask:(NSURLSessionTask *)arg1 requestForEstablishedConnection:(NSURLRequest *)arg2;
- (void)URLSessionTask:(NSURLSessionTask *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;
- (void)URLSessionTaskIsWaitingForConnection:(NSURLSessionTask *)arg1;
@end

