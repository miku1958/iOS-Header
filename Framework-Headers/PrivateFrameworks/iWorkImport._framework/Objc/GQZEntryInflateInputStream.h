//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@class NSString;
@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    long long mEnd;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
    id<GQZArchiveInputStream> mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 input:(id)arg5;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long *)arg2;

@end
