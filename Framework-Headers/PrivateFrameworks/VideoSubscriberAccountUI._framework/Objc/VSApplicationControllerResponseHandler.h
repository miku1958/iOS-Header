//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponseHandler : NSObject
{
}

- (id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id *)arg2;
- (void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_parseSAMLResponseString:(id)arg1 error:(id *)arg2;
- (void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2;
- (void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

