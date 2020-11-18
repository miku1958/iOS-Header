//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIShadowViewImageCacheKey : NSObject <NSCopying>
{
    double _scale;
    double _size;
    unsigned long long _options;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(double)arg1 scale:(double)arg2 options:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCacheKey:(id)arg1;

@end

