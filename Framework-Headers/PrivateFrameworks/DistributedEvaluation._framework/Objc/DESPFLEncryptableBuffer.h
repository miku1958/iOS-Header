//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData;

@interface DESPFLEncryptableBuffer : NSObject
{
    NSMutableData *_serializedData;
    unsigned long long _dataLengthVarintOffset;
    unsigned long long _mutableFloatsOffset;
    unsigned long long _ivOffset;
    unsigned long long _sizeOfDataTransport;
    unsigned long long _sizeOfDataTransportOffset;
    NSError *_encryptionError;
    BOOL _encryptionWasAttempted;
    BOOL _transportIsBfloat16;
    unsigned long long _count;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property (readonly, nonatomic) float *mutableDataNumbers;

- (void).cxx_destruct;
- (id)encryptedDataWithPublicKey:(id)arg1 error:(id *)arg2;
- (id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2;

@end

