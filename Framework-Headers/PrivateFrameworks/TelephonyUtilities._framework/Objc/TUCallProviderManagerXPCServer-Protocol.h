//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUDialRequest;
@protocol TUCallProviderManagerXPCClient;

@protocol TUCallProviderManagerXPCServer <NSObject>
- (oneway void)donateUserIntentForProviderWithIdentifier:(NSString *)arg1;
- (oneway void)launchAppForDialRequest:(TUDialRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)providersByIdentifier:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
- (void)registerClient:(id<TUCallProviderManagerXPCClient>)arg1;
- (void)unregisterClient:(id<TUCallProviderManagerXPCClient>)arg1;
@end
