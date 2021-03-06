//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/NSObject-Protocol.h>

@class NSDictionary, NSURLResponse;

@protocol TPSURLSessionCustomAuthHandling <NSObject>
+ (BOOL)canAuthenticateWithURLResponse:(NSURLResponse *)arg1;
- (void)authenticateForURLResponse:(NSURLResponse *)arg1 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg2;

@optional
- (NSDictionary *)customHeaderFields;
@end

