//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLSession;

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
@end

