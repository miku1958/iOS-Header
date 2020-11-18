//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VNImageRegistrationSignature : NSObject <NSSecureCoding>
{
    struct FastRegistration_Signatures mSignature_;
}

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
- (const struct FastRegistration_Signatures *)signature;

@end
