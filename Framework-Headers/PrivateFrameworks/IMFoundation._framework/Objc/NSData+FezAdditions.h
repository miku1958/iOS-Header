//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (FezAdditions)

@property (readonly, nonatomic) NSData *SHA1Data;
@property (readonly, nonatomic) NSString *SHA1HexString;
@property (readonly, nonatomic) NSData *SHA256Data;

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
@end
