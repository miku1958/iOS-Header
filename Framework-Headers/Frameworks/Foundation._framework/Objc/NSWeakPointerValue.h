//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface NSWeakPointerValue : NSValue
{
    void *_value;
    void *_weakValue;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getValue:(void *)arg1;
- (unsigned long long)hash;
- (id)initWithPointer:(void *)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (id)nonretainedObjectValue;
- (const char *)objCType;

@end
