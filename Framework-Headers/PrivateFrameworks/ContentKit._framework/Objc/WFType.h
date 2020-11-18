//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>
{
}

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *typeDescription;

+ (BOOL)supportsSecureCoding;
- (BOOL)conformsToClass:(Class)arg1;
- (BOOL)conformsToType:(id)arg1;
- (BOOL)conformsToTypes:(id)arg1;
- (BOOL)conformsToUTType:(const struct __CFString *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToClass:(Class)arg1;
- (BOOL)isEqualToType:(id)arg1;
- (BOOL)isEqualToUTType:(const struct __CFString *)arg1;

@end
