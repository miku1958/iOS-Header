//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRSharingSessionHelper : NSObject
{
}

+ (long long)CoarseRangeToProx:(int)arg1;
+ (id)HexStringToNSDataMac:(const basic_string_a1f69cfb *)arg1;
+ (id)NSDataMacToUUID:(id)arg1;
+ (unsigned long long)NSDataToUInt64:(id)arg1;
+ (int)ProxToCoarseRange:(long long)arg1;
+ (id)ProxToString:(long long)arg1;
+ (basic_string_a1f69cfb)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;
+ (id)UUIDStringToNSDataMac:(const basic_string_a1f69cfb *)arg1 len:(unsigned long long)arg2;
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;
+ (id)convertMacStringToNSData:(const basic_string_a1f69cfb *)arg1;
+ (id)reverseNSData:(id)arg1;

@end

