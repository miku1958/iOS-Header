//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UICGColorCacheKey : NSObject <NSCopying>
{
    struct __CFArray *_colors;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithColors:(struct CGColor *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCacheKey:(id)arg1;

@end

