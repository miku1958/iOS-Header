//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

#import <extension/NSKeyValueProxyCaching-Protocol.h>

@class NSKeyValueNonmutatingSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
+ (id)_proxyShare;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (void)dealloc;
- (id)member:(id)arg1;
- (id)objectEnumerator;

@end

