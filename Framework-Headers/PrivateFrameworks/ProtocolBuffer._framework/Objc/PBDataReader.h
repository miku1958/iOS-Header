//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PBDataReader : NSObject
{
    unsigned long long _pos;
    BOOL _error;
    const char *_bytes;
    NSData *_data;
    unsigned long long _length;
}

@property (nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) unsigned long long position; // @synthesize position=_pos;

- (id)data;
- (void)dealloc;
- (BOOL)hasError;
- (BOOL)hasMoreData;
- (id)initWithData:(id)arg1;
- (BOOL)isAtEnd;
- (BOOL)mark:(CDStruct_4bcfbbae *)arg1;
- (unsigned long long)offset;
- (BOOL)readBOOL;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (id)readData;
- (double)readDouble;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (float)readFloat;
- (int)readInt32;
- (long long)readInt64;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (int)readSfixed32;
- (long long)readSfixed64;
- (int)readSint32;
- (long long)readSint64;
- (id)readString;
- (void)readTag:(unsigned short *)arg1 andType:(char *)arg2;
- (void)readTag:(unsigned int *)arg1 type:(char *)arg2;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (long long)readVarInt;
- (void)recall:(const CDStruct_4bcfbbae *)arg1;
- (BOOL)seekToOffset:(unsigned long long)arg1;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (BOOL)skipValueWithTag:(unsigned int)arg1 type:(unsigned char)arg2;
- (void)updateData:(id)arg1;

@end

