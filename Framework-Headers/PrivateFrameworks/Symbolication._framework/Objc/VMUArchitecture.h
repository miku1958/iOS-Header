//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCoding-Protocol.h>
#import <Symbolication/NSCopying-Protocol.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying>
{
    int _cpuType;
    int _cpuSubtype;
}

+ (id)anyArchitecture;
+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
+ (id)armArchitecture;
+ (id)currentArchitecture;
+ (id)i386Architecture;
+ (void)initialize;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)ppcArchitecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)cpuSubtype;
- (int)cpuType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
- (BOOL)is32Bit;
- (BOOL)is64Bit;
- (BOOL)isBigEndian;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArchitecture:(id)arg1;
- (BOOL)isLittleEndian;
- (BOOL)matchesArchitecture:(id)arg1;

@end
