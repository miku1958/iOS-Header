//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator>
{
    struct UsdPrimRange _range;
    struct iterator _it;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrim:(const struct UsdPrim *)arg1;
- (id)initWithPrim:(const struct UsdPrim *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;
- (id)initWithScene:(const TfWeakPtr_163a6a2f *)arg1;
- (id)initWithScene:(const TfWeakPtr_163a6a2f *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;
- (id)initWithSubtreeRange:(const struct UsdPrimRange *)arg1;
- (id)nextObject;

@end
