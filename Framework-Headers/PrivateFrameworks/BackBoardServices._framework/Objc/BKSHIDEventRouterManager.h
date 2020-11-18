//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/_BKSHIDEventRouterDelegate-Protocol.h>

@class BKSHIDEventDeliveryManager, NSArray, NSMutableArray, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding>
{
    BKSHIDEventDeliveryManager *_deliveryManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_routers;
    BOOL _queue_needsFlush;
    id<BSInvalidatable> _queue_dispatchingRulesAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *eventRouters; // @dynamic eventRouters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_initWithDeliveryManager:(id)arg1;
- (void)_queue_flush;
- (void)_queue_routerDidChange:(id)arg1;
- (id)_queue_succinctDescriptionBuilder;
- (id)_targetForDestination:(long long)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
