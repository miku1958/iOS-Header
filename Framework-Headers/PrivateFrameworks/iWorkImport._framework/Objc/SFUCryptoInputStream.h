//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/SFUInputStream-Protocol.h>

@class NSString, SFUCryptor;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface SFUCryptoInputStream : NSObject <SFUInputStream>
{
    id<SFUInputStream> mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end

