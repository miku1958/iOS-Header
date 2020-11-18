//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface PLXPCShMemData : NSData
{
    void *_buffer;
    unsigned long long _dataLength;
    unsigned long long _bufferLength;
}

- (const void *)bytes;
- (void)dealloc;
- (id)description;
- (id)initWithXPCShmem:(id)arg1;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (unsigned long long)length;

@end
