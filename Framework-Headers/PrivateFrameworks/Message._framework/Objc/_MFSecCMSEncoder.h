//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer
{
    int _SecCMSError;
    struct SecCmsEncoderStr *_encoder;
    struct SecCmsMessageStr *_message;
    NSMutableData *_singleShot;
}

@property (readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;

- (void).cxx_destruct;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id *)arg2;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id *)arg3;

@end

