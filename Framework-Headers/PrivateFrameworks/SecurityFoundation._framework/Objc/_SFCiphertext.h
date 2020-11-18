//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding>
{
    id _ciphertextInternal;
}

@property (readonly) NSData *ciphertext;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

