//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKHashableBigInt : NSObject <NSCopying>
{
    struct GLKBigInt_s _bigInt;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithBigInt:(struct GLKBigInt_s *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
