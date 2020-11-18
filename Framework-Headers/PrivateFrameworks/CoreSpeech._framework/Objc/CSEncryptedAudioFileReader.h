//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface CSEncryptedAudioFileReader : NSObject
{
    NSURL *_fileUrl;
    NSData *_aesKey;
    NSData *_readBuffer;
    unsigned long long _sampleByteDepth;
}

@property (strong, nonatomic) NSData *aesKey; // @synthesize aesKey=_aesKey;
@property (strong, nonatomic) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
@property (strong, nonatomic) NSData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property (nonatomic) unsigned long long sampleByteDepth; // @synthesize sampleByteDepth=_sampleByteDepth;

- (void).cxx_destruct;
- (id)initWithFileUrl:(id)arg1 aesKey:(id)arg2 sampleByteDepth:(unsigned long long)arg3;
- (BOOL)readAudioChunksWithCallback:(CDUnknownBlockType)arg1;

@end

