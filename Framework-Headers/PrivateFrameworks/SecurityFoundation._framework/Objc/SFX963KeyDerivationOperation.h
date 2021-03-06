//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSString;
@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation>
{
    id _x963KeyDerivationOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) id<SFKeyDerivingOperation> sharedSecretOperation;
@property (readonly) Class superclass;

+ (long long)keySource;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2;

@end

