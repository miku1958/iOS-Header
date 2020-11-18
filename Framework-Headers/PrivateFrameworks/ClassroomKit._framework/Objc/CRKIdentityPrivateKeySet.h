//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface CRKIdentityPrivateKeySet : NSObject <NSSecureCoding>
{
    NSData *_activeIdentityPrivateKeyData;
    NSData *_stagedIdentityPrivateKeyData;
}

@property (readonly, copy, nonatomic) NSData *activeIdentityPrivateKeyData; // @synthesize activeIdentityPrivateKeyData=_activeIdentityPrivateKeyData;
@property (readonly, copy, nonatomic) NSData *stagedIdentityPrivateKeyData; // @synthesize stagedIdentityPrivateKeyData=_stagedIdentityPrivateKeyData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActiveIdentityPrivateKeyData:(id)arg1 stagedIdentityPrivateKeyData:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

