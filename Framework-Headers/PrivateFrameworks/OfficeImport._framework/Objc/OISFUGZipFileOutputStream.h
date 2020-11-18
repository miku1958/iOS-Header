//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUOutputStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream>
{
    struct gzFile_s *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)gzipExtension;
- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (long long)offset;
- (id)path;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
