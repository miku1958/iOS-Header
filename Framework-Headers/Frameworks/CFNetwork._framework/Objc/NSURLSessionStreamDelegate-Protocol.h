//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSInputStream, NSOutputStream, NSURLSession, NSURLSessionStreamTask;

@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 betterRouteDiscoveredForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 readClosedForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 streamTask:(NSURLSessionStreamTask *)arg2 didBecomeInputStream:(NSInputStream *)arg3 outputStream:(NSOutputStream *)arg4;
- (void)URLSession:(NSURLSession *)arg1 writeClosedForStreamTask:(NSURLSessionStreamTask *)arg2;
@end

