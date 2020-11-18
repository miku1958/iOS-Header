//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NEFilterFlow;

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)fetchCurrentRulesForFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
@end
