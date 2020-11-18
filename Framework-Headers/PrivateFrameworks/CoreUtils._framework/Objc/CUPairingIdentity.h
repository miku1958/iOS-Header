//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSData *_publicKey;
    NSData *_secretKey;
}

@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property (copy, nonatomic) NSData *secretKey; // @synthesize secretKey=_secretKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

