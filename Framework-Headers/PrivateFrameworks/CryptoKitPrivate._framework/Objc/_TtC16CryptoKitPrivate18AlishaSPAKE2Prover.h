//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16CryptoKitPrivate18AlishaSPAKE2Prover : NSObject
{
    MISSING_TYPE *spakeCtxData;
    MISSING_TYPE *aad;
    MISSING_TYPE *X;
    MISSING_TYPE *z0_self;
    MISSING_TYPE *z1_self;
}

- (void).cxx_destruct;
- (id)getX;
- (id)init;
- (id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4;
- (id)processResponseWithY:(id)arg1 M1:(id)arg2;

@end

