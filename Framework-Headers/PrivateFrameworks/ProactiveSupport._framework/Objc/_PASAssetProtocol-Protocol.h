//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSString, _PASNotificationToken;

@protocol _PASAssetProtocol <NSObject>

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) unsigned long long assetVersion;
@property (readonly, nonatomic) unsigned long long bestAssetVersionObserved;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;

- (BOOL)deregisterUpdateHandlerAsyncWithToken:(_PASNotificationToken *)arg1;
- (NSString *)pathForResourceWithName:(NSString *)arg1 extension:(NSString *)arg2;
- (_PASNotificationToken *)registerUpdateHandler:(void (^)(id<_PASAssetProtocol>))arg1;
@end

