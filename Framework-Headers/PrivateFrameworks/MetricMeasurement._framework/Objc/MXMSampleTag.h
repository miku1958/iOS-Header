//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying>
{
    NSOrderedSet *_taxonomy;
    MXMSampleTag *_parent;
}

@property (readonly, copy, nonatomic) NSString *domainNameString;
@property (readonly, copy, nonatomic) MXMSampleTag *parent; // @synthesize parent=_parent;

+ (id)ancestery;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)containsTag:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)initWithDNString:(id)arg1;
- (id)initWithTaxonomy:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1;

@end
