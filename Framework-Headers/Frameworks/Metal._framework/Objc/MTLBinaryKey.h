//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface MTLBinaryKey : NSObject <NSCopying>
{
    CDStruct_41a22ec7 _hash;
}

@property (readonly) const CDStruct_41a22ec7 *value;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithHash:(const CDStruct_41a22ec7 *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;

@end

