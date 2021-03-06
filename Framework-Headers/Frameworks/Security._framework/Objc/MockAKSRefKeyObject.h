//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, _SFAESKey;

__attribute__((visibility("hidden")))
@interface MockAKSRefKeyObject : NSObject
{
    NSData *_keyData;
    _SFAESKey *_key;
    NSData *_acmHandle;
    NSData *_externalData;
    NSData *_blob;
}

@property (strong) NSData *acmHandle; // @synthesize acmHandle=_acmHandle;
@property (strong) NSData *blob; // @synthesize blob=_blob;
@property (strong) NSData *externalData; // @synthesize externalData=_externalData;
@property (strong) _SFAESKey *key; // @synthesize key=_key;
@property (strong) NSData *keyData; // @synthesize keyData=_keyData;

- (void).cxx_destruct;
- (id)initWithKeyData:(id)arg1 parameters:(id)arg2 error:(id *)arg3;

@end

