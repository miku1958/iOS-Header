//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleOwnerUUIDDecoder : NSObject
{
    unsigned char mUUID[16];
    unsigned long long mIndex;
}

+ (id)UUIDDecoderWithUUID:(id)arg1;
- (unsigned char)decodeByte;
- (unsigned long long)decodeNSUIntegerFromUInt64;
- (unsigned long long)decodeUInt64;
- (void)endDecode;
- (id)initWithUUID:(id)arg1;
- (BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1;

@end

