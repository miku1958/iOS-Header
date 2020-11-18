//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class NSData;

@interface HAPPairingKey : NSObject <NSSecureCoding>
{
    NSData *_data;
}

@property (readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingKeyData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end

