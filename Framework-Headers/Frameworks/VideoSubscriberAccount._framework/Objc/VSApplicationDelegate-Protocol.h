//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class IKAppDocument, JSContext, NSDictionary, NSError, VSApplication;

@protocol VSApplicationDelegate <NSObject>
- (IKAppDocument *)activeAppDocumentForApplication:(VSApplication *)arg1;
- (void)application:(VSApplication *)arg1 evaluateAppJavascriptInContext:(JSContext *)arg2;
- (void)application:(VSApplication *)arg1 startDidFailWithError:(NSError *)arg2;
- (void)applicationDidStart:(VSApplication *)arg1;
- (void)applicationDidStop:(VSApplication *)arg1;
- (NSDictionary *)launchParamsForApplication:(VSApplication *)arg1;
@end

