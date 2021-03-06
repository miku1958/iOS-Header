//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PublicKeyProtocol-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>
{
    struct __SecKey *_publicKeyRef;
    NSData *_serializedKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct __SecKey *publicKeyRef; // @synthesize publicKeyRef=_publicKeyRef;
@property (strong) NSData *serializedKey; // @synthesize serializedKey=_serializedKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithSecKeyRef:(struct __SecKey *)arg1;
- (BOOL)verifySignature:(id)arg1 data:(id)arg2;

@end

