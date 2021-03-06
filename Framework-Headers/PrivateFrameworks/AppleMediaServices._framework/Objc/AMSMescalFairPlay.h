//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMescalFairPlay : NSObject
{
    BOOL _complete;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;

- (id)_dataWithFairPlayBytes:(const char *)arg1 length:(unsigned int)arg2;
- (void)_teardownSession;
- (void)dealloc;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (id)initWithMescalType:(long long)arg1;
- (id)primingSignatureForData:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (BOOL)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;

@end

