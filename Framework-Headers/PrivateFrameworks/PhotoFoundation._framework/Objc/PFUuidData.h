//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface PFUuidData : NSData
{
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) NSString *mercuryStringValue;

+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (id)hostUuid;
+ (BOOL)isCanonicalUuidString:(id)arg1;
+ (BOOL)isMercuryBase64String:(id)arg1;
+ (BOOL)isMercuryUuidString:(id)arg1;
+ (BOOL)isSupportedUuidString:(id)arg1;
+ (id)nullUuid;
+ (id)randomUuid;
+ (id)uuidWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithString:(id)arg1;
- (const void *)bytes;
- (Class)classForCoder;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initNull;
- (id)initRandom;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMercuryBase64String:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (unsigned long long)length;

@end

