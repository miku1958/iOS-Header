//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFUCryptoUtils : NSObject
{
}

+ (BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2;
+ (BOOL)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;
+ (id)generateRandomSalt;
+ (id)generateRandomSaltWithLength:(unsigned long long)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (unsigned int)ivLengthForKey:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id *)arg4;
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(BOOL)arg4 zipStream:(id *)arg5;
+ (id)saltForSageFiles;
+ (id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2;
+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;

@end

