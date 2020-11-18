//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFSigningOperation-Protocol.h>

@class NSString, _SFECKeySpecifier;
@protocol SFDigestOperation;

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation>
{
    id _x962SigningOperationInternal;
    id<SFDigestOperation> _digestOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id<SFDigestOperation> digestOperation; // @synthesize digestOperation=_digestOperation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) _SFECKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;

@end
