//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSString, NSURLSessionConfiguration;

@protocol WFOAuth2ProviderSessionManager <NSObject>
- (id)initWithClientID:(NSString *)arg1 clientSecret:(NSString *)arg2;
- (id)initWithSessionConfiguration:(NSURLSessionConfiguration *)arg1 clientID:(NSString *)arg2 clientSecret:(NSString *)arg3;
@end

