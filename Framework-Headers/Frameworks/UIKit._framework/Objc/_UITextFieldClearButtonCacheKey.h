//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButtonCacheKey : NSObject <NSCopying>
{
    int _variant;
    struct CGColor *_color;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithVariant:(int)arg1 color:(struct CGColor *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCacheKey:(id)arg1;

@end

