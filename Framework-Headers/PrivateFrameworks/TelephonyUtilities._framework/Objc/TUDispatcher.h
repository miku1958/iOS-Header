//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;

+ (id)dispatcherWithIdentifier:(id)arg1;
+ (id)dispatcherWithQueue:(id)arg1;
- (void).cxx_destruct;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (CDUnknownBlockType)qosUserInteractiveDispatchBlockForBlock:(CDUnknownBlockType)arg1;

@end

