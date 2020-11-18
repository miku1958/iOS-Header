//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSObject-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICMutableUserIdentityProperties, ICUserIdentityProperties, ICUserVerificationContext, NSNumber;
@protocol ICUserIdentityStoreBackendDelegate;

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSNumber *activeAccountDSID;
@property (readonly, nonatomic) NSNumber *activeLockerAccountDSID;
@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;
@property (readonly, copy, nonatomic) ICUserIdentityProperties *primaryICloudAccountIdentityProperties;
@property (readonly, copy, nonatomic) ICUserVerificationContext *verificationContextToEstablishAccount;

- (ICMutableUserIdentityProperties *)identityPropertiesForDSID:(NSNumber *)arg1;
- (void)removeIdentityForDSID:(NSNumber *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)replaceIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 withCompletionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)synchronize;
- (void)updateActiveAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateActiveLockerAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (ICUserVerificationContext *)verificationContextForDSID:(NSNumber *)arg1;
@end

