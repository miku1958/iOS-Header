//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying>
{
    HKSource *_source;
    NSString *_version;
}

@property (readonly) HKSource *source;
@property (readonly) NSString *version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)_initWithSource:(id)arg1;
- (void)_setSource:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 version:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
