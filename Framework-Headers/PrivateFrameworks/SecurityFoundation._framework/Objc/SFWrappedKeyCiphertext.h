//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

@interface SFWrappedKeyCiphertext : _SFCiphertext
{
    id _wrappedKeyCiphertextInternal;
}

@property (readonly) _SFCiphertext *ciphertextKey;

- (void).cxx_destruct;
- (id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2;

@end

