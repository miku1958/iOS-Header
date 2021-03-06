//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeychainCircle/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding>
{
    BOOL _asSender;
    NSString *_pairingUUID;
    unsigned long long _piggybackingVersion;
    unsigned long long _epoch;
    unsigned long long _context;
    NSData *_secret;
    CDStruct_60067b7e *_send;
    CDStruct_60067b7e *_receive;
}

@property BOOL asSender; // @synthesize asSender=_asSender;
@property unsigned long long context; // @synthesize context=_context;
@property unsigned long long epoch; // @synthesize epoch=_epoch;
@property (strong) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property unsigned long long piggybackingVersion; // @synthesize piggybackingVersion=_piggybackingVersion;
@property CDStruct_60067b7e *receive; // @synthesize receive=_receive;
@property (strong) NSData *secret; // @synthesize secret=_secret;
@property CDStruct_60067b7e *send; // @synthesize send=_send;

+ (id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2;
+ (id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)GCM:(const struct ccmode_gcm *)arg1 context:(CDStruct_60067b7e *)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char *)arg5 processed:(char *)arg6 tag:(char *)arg7 error:(id *)arg8;
- (id)decryptAndVerify:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 error:(id *)arg2;
- (unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2;
- (void)finalize;
- (id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2;
- (id)initAsSender:(id)arg1 context:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(BOOL)arg3;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(BOOL)arg3 pairingUUID:(id)arg4 piggybackingVersion:(unsigned long long)arg5 epoch:(unsigned long long)arg6;

@end

