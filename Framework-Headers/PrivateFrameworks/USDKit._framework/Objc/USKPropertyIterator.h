//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKPropertyIterator : NSObject <USKIterator>
{
    vector_6f2ba469 _properties;
    struct __wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *> {
        struct UsdProperty *__i;
    } _it;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithProperties:(const vector_6f2ba469 *)arg1;
- (id)nextObject;

@end

