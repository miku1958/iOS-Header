//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLVisibleFunctionTableDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor
{
    struct MTLVisibleFunctionTableDescriptorPrivate _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)functionCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)arg1;
- (void)setFunctionCount:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;

@end
