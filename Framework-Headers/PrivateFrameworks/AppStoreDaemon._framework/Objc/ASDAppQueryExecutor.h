//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDDispatchQueue, ASDServiceBroker, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ASDAppQueryExecutor : NSObject
{
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

+ (void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithServiceBroker:(id)arg1;

@end

