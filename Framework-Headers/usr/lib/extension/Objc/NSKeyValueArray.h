//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <Foundation/NSKeyValueProxyCaching-Protocol.h>

@class NSKeyValueNonmutatingArrayMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
+ (id)_proxyShare;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end

