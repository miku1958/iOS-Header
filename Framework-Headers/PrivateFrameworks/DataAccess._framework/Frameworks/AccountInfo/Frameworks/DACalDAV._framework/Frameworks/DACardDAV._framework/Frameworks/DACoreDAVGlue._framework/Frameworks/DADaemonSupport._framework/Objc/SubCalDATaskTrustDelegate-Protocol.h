//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class NSURLAuthenticationChallenge, SubCalDATask;

@protocol SubCalDATaskTrustDelegate <NSObject>
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forTask:(SubCalDATask *)arg2;
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forTask:(SubCalDATask *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
@end

