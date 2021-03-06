//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>
#import <ProactiveSupport/NSMutableCopying-Protocol.h>
#import <ProactiveSupport/NSSecureCoding-Protocol.h>

@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)allDomains;
- (BOOL)containsDomain:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globPatterns;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomainsFromArray:(id)arg1;
- (id)initWithDomainsFromSet:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDomainSelection:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

