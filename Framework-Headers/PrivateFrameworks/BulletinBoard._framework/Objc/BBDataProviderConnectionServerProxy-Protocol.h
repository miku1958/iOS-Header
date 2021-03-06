//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProviderIdentity, BBParentSectionDataProviderFactory, NSString;
@protocol BBRemoteDataProviderClientProxy;

@protocol BBDataProviderConnectionServerProxy <NSObject>
- (void)addDataProviderWithSectionID:(NSString *)arg1 clientProxy:(id<BBRemoteDataProviderClientProxy>)arg2 identity:(BBDataProviderIdentity *)arg3 completion:(void (^)(id<BBRemoteDataProviderServerProxy>))arg4;
- (void)addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg1;
- (void)clientIsReady:(void (^)(void))arg1;
- (void)removeDataProviderWithSectionID:(NSString *)arg1;
@end

