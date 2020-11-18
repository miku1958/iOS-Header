//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_extension;
}

@property (readonly, copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (BOOL)supportsSecureCoding;
+ (id)withName:(id)arg1 extension:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 extension:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBundleResourceDescriptor:(id)arg1;

@end

