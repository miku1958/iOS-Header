//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class IDSMPPublicAccountIdentity;

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity
{
}

@property (readonly, nonatomic) IDSMPPublicAccountIdentity *publicAccountIdentity;

- (id)dataRepresentationWithError:(id *)arg1;
- (BOOL)isParentOfCluster:(id)arg1;

@end

