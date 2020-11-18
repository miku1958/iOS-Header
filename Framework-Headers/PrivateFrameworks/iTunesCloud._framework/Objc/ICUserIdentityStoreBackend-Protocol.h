//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSObject-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICLocalStoreAccountProperties, ICUserIdentityProperties, ICUserVerificationContext, NSNumber;
@protocol ICUserIdentityStoreBackendDelegate;

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>

@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;

- (NSNumber *)activeAccountDSIDWithError:(id *)arg1;
- (NSNumber *)activeLockerAccountDSIDWithError:(id *)arg1;
- (ICUserIdentityProperties *)identityPropertiesForDSID:(NSNumber *)arg1 error:(id *)arg2;
- (ICUserIdentityProperties *)identityPropertiesForPrimaryICloudAccountWithError:(id *)arg1;
- (ICLocalStoreAccountProperties *)localStoreAccountPropertiesWithError:(id *)arg1;
- (void)removeIdentityForDSID:(NSNumber *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (BOOL)replaceIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 error:(id *)arg3;
- (BOOL)setIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 error:(id *)arg3;
- (BOOL)setLocalStoreAccountProperties:(ICLocalStoreAccountProperties *)arg1 error:(id *)arg2;
- (void)synchronize;
- (BOOL)updateActiveAccountDSID:(NSNumber *)arg1 error:(id *)arg2;
- (BOOL)updateActiveLockerAccountDSID:(NSNumber *)arg1 error:(id *)arg2;
- (ICUserVerificationContext *)verificationContextForAccountEstablishmentWithError:(id *)arg1;
- (ICUserVerificationContext *)verificationContextForDSID:(NSNumber *)arg1 error:(id *)arg2;
@end
