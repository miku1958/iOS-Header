//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPMutableCryptoInfo-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo>
{
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
    NSString *_passphrase;
}

@property (readonly, nonatomic) NSArray *blockInfos;
@property (readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property (readonly, nonatomic) unsigned long long preferredBlockSize;
@property (readonly) Class superclass;

- (void)addBlockInfo:(id)arg1;
- (void)dealloc;
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (unsigned int)iterationCount;
- (const char *)keyData;
- (unsigned long long)keyLength;
- (int)keyType;
- (id)mutableCryptoInfoCopy;
- (void)reset;
- (id)saltData;

@end

