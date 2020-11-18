//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSQuery.h>

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesOfTypeQuery : _LSQuery
{
    BOOL _legacySPI;
    unsigned long long _type;
}

@property (readonly, nonatomic) BOOL legacySPI; // @synthesize legacySPI=_legacySPI;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)queryWithType:(unsigned long long)arg1 legacySPI:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
