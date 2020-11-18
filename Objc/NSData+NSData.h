//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (NSData)
+ (BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
+ (id)dataWithData:(id)arg1;
- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long long)_cfTypeID;
- (BOOL)_copyWillRetain;
- (id)_createDispatchData;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_6243051c *)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_isCompact;
- (BOOL)_isDispatchData;
- (BOOL)_providesConcreteBacking;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)base64Encoding;
- (const void *)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@end

