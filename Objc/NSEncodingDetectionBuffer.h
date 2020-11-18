//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEncodingDetectionPlaceholder;

__attribute__((visibility("hidden")))
@interface NSEncodingDetectionBuffer : NSObject
{
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    NSEncodingDetectionPlaceholder *_placeholder;
    char *_bytes;
    BOOL _bytesAllocated;
    unsigned long long _bytesIndex;
    unsigned long long _bytesLength;
}

- (BOOL)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4;
- (void)appendByte:(unsigned char)arg1;
- (void)appendBytes:(const char *)arg1 count:(unsigned long long)arg2;
- (void)appendPlaceholder;
- (void)appendUTF16Char:(unsigned short)arg1;
- (void)appendUTF32Char:(unsigned int)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 stackBuffer:(char *)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5;
- (id)stringWithLossySubsitutionString:(id)arg1;

@end

