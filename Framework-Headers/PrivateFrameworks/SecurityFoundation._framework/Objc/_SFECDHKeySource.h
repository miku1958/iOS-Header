//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject
{
    id _ecdhKeySourceInternal;
}

@property (strong, nonatomic) _SFECKeyPair *localKeyPair;
@property (strong, nonatomic) _SFECPublicKey *remotePublicKey;

- (void).cxx_destruct;
- (id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2;

@end

