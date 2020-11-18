//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSCopying-Protocol.h>
#import <extension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>
{
}

@property (readonly, copy) NSString *UUIDString;

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
- (struct __CFString *)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

