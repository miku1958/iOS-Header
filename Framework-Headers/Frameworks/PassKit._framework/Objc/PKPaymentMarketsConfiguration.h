//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSURL;

@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding>
{
    NSSet *_markets;
    NSString *_version;
    NSURL *_url;
}

@property (readonly, copy) NSSet *markets; // @synthesize markets=_markets;
@property (readonly, copy) NSURL *url; // @synthesize url=_url;
@property (readonly, copy) NSString *version; // @synthesize version=_version;

+ (void)paymentMarketsConfigurationWithURL:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)closestMarketForLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expressCredentialTypesForLocation:(id)arg1;
- (id)expressTransitNetworksForLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 url:(id)arg2 forDeviceClass:(id)arg3 version:(id)arg4;
- (id)marketsForLocation:(id)arg1;
- (id)marketsForLocation:(id)arg1 ofType:(long long)arg2;
- (id)marketsForRegions:(id)arg1;
- (id)supportedCredentialTypesForLocation:(id)arg1;
- (id)supportedTransitNetworksForLocation:(id)arg1;

@end

