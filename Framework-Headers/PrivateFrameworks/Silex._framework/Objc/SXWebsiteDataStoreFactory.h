//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebsiteDataStoreFactory-Protocol.h>

@class NSString, SXProxyConfiguration;

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory>
{
    SXProxyConfiguration *_proxyConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXProxyConfiguration *proxyConfiguration; // @synthesize proxyConfiguration=_proxyConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createWebsiteDataStore;
- (id)initWithProxyConfiguration:(id)arg1;

@end
