//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

#import <extension/NSKeyValueProxyCaching-Protocol.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
+ (id)_proxyShare;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (void)setArray:(id)arg1;

@end

