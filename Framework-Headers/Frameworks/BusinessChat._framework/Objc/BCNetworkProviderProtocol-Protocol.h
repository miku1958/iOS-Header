//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChat/NSObject-Protocol.h>

@class NSURLRequest;

@protocol BCNetworkProviderProtocol <NSObject>
- (void)performDataTaskWithRequest:(NSURLRequest *)arg1 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
@end
