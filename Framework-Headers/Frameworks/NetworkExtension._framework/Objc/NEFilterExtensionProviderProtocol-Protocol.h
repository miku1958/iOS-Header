//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderProtocol-Protocol.h>

@class NEFilterProviderConfiguration;

@protocol NEFilterExtensionProviderProtocol <NEExtensionProviderProtocol>
- (void)startFilterWithOptions:(NEFilterProviderConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

