//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity
{
    struct __SecKey *_publicKey;
}

@property (readonly, nonatomic) NSData *forwardingTicket;
@property (readonly, nonatomic) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesAdmin;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesSigning;
@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;

+ (id)clusterWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;
- (id)adminServiceIdentityWithType:(long long)arg1;
- (id)clusterByUpdatingGroupID:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (BOOL)isParentOfCluster:(id)arg1;
- (id)publicAccountClusterWithError:(id *)arg1;
- (id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;
- (id)signData:(id)arg1 withError:(id *)arg2;
- (id)signingServiceIdentityWithType:(long long)arg1;

@end

