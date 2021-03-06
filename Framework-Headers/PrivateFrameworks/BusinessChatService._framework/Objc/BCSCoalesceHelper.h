//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCoalesceHelperProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol>
{
    NSMutableDictionary *_coalesceObjectPool;
    NSObject<OS_dispatch_queue> *_coalesceHelperDispatchQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *coalesceHelperDispatchQueue; // @synthesize coalesceHelperDispatchQueue=_coalesceHelperDispatchQueue;
@property (readonly, nonatomic) NSMutableDictionary *coalesceObjectPool; // @synthesize coalesceObjectPool=_coalesceObjectPool;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dequeueCoalesceObjectsForCoalesceKey:(id)arg1 inCoalesceObjectPool:(id)arg2;
- (void)_enqueueCoalesceObject:(id)arg1 isDuplicateRequest:(BOOL *)arg2 inCoalesceObjectPool:(id)arg3;
- (id)dequeueCoalesceObjectsForCoalesceKey:(id)arg1;
- (void)enqueueCoalesceObject:(id)arg1 isDuplicateRequest:(BOOL *)arg2;
- (id)initWithQOSClass:(unsigned int)arg1;

@end

