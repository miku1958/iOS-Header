//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery
{
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)queryWithType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

