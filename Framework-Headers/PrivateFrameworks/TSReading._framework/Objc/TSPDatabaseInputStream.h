//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/SFUInputStream-Protocol.h>
#import <TSReading/TSUStreamReadChannel-Protocol.h>

@class NSString;

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream>
{
    struct sqlite3_blob *_blob;
    int _offset;
    int _length;
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
- (id)initWithBlob:(struct sqlite3_blob *)arg1;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)seekToOffset:(long long)arg1;

@end
