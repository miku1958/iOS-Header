//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DASubCal/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSURL, NSURLAuthenticationChallenge, SubCalURLRequest;

@protocol SubCalURLRequestDelegate <NSObject>
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forSubCalURLRequest:(SubCalURLRequest *)arg2;
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forSubCalURLRequest:(SubCalURLRequest *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 finishedWithData:(NSData *)arg2 error:(NSError *)arg3;

@optional
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 didRedirectToURL:(NSURL *)arg2;
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 updatedData:(NSData *)arg2;
- (void)subCalURLRequestNeedsUsernameAndPasswordForHost:(NSString *)arg1 continuation:(void (^)(NSString *, NSString *))arg2;
@end

