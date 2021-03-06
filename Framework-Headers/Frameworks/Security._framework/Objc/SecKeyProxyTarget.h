//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/SecKeyProxyProtocol-Protocol.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol>
{
    id _key;
    NSData *_certificate;
    SecKeyProxy *_publicKeyProxy;
}

@property (readonly, nonatomic) struct __SecKey *key;

- (void).cxx_destruct;
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;
- (void)getPublicKey:(CDUnknownBlockType)arg1;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;
- (void)initializeWithReply:(CDUnknownBlockType)arg1;
- (void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end

