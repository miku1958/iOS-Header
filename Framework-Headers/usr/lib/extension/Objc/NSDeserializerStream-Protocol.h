//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol NSDeserializerStream
- (id)initFromMemoryNoCopy:(const void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void *)arg1 length:(unsigned long long)arg2;
- (int)readInt;
@end

