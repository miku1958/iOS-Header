//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMAuthenticationCredential.h>

@class NSDictionary, NSString;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential
{
    NSString *_authenticationScheme;
    NSDictionary *_properties;
}

@property (readonly, copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
@property (readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAuthenticationCredential:(id)arg1;

@end

