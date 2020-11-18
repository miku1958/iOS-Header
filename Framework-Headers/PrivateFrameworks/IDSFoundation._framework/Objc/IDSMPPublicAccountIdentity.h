//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity
{
}

@property (readonly, nonatomic) NSData *publicName;

+ (id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (BOOL)verifySignature:(id)arg1 ofData:(id)arg2 error:(id *)arg3;

@end

