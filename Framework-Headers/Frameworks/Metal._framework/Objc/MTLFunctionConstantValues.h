//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLFunctionConstantValues : NSObject <NSCopying>
{
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (void)setConstantValues:(const void *)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange)arg3;

@end

