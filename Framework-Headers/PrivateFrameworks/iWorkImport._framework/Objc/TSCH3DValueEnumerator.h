//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DValueEnumerator : NSObject
{
    struct ValueEnumerator mImp;
}

@property (readonly, nonatomic) double value;

- (id).cxx_construct;
- (id)enumerator;
- (unsigned long long)index;
- (BOOL)isValid;
- (BOOL)isValidNonZero;
- (id)nextObject;
- (void)setValue:(double)arg1;

@end

