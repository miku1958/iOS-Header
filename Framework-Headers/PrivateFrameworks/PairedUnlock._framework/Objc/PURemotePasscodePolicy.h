//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedUnlock/NSSecureCoding-Protocol.h>

@interface PURemotePasscodePolicy : NSObject <NSSecureCoding>
{
    BOOL _modificationAllowed;
    unsigned long long _passcodeMinimumLength;
}

@property (nonatomic, getter=isModificationAllowed) BOOL modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
@property (nonatomic) unsigned long long passcodeMinimumLength; // @synthesize passcodeMinimumLength=_passcodeMinimumLength;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
