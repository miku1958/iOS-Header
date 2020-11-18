//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Message/MFCollectingDataConsumer-Protocol.h>

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>
{
    int _SecCMSError;
    struct SecCmsMessageStr *_message;
    struct SecCmsDigestContextStr *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr *_signedData;
    struct SecCmsEnvelopedDataStr *_envelopedData;
    BOOL _isEncrypted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;
@property (readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithPartData:(id)arg1 error:(id *)arg2;
- (BOOL)isContentEncrypted;
- (BOOL)isContentSigned;
- (id)signedData;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id *)arg2;

@end

