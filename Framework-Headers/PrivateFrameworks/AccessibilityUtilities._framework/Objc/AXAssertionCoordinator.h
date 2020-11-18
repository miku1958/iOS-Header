//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol AXAssertionCoordinatorDelegate, OS_dispatch_queue;

@interface AXAssertionCoordinator : NSObject
{
    id<AXAssertionCoordinatorDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSHashTable *_assertions;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
@property (strong, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
@property (weak, nonatomic) id<AXAssertionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (void)_startTrackingPoorMansAssertion:(id)arg1;
- (void)_stopTrackingPoorMansAssertion:(id)arg1;
- (id)acquireAssertionWithReason:(id)arg1;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

@end
