//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NSPageData : NSData
{
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (long long)_umask;
+ (void)initialize;
- (id)_mappedFile;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (const void *)bytes;
- (id)data;
- (void)dealloc;
- (id)deserializer;
- (id)init;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)writeFd:(long long)arg1;
- (unsigned long long)writeFile:(id)arg1;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5;

@end

