//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (BOOL)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
@end

