//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier
{
    id _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (Class)keyClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end

