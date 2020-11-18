//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPPairingKey, NSString;

@interface HAPPairingIdentity : NSObject
{
    NSString *_identifier;
    HAPPairingKey *_publicKey;
    HAPPairingKey *_privateKey;
    unsigned long long _permissions;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
@property (readonly, nonatomic) HAPPairingKey *privateKey; // @synthesize privateKey=_privateKey;
@property (readonly, nonatomic) HAPPairingKey *publicKey; // @synthesize publicKey=_publicKey;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end

