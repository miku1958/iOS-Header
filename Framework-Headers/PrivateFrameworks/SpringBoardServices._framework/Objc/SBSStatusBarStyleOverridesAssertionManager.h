//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSStatusBarStyleOverridesAssertionClient-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient>
{
    NSMapTable *_assertionsByIdentifier;
    NSXPCConnection *_sbXPCConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (strong, nonatomic) NSMapTable *assertionsByIdentifier; // @synthesize assertionsByIdentifier=_assertionsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (strong, nonatomic) NSXPCConnection *sbXPCConnection; // @synthesize sbXPCConnection=_sbXPCConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(BOOL)arg2;
- (void)_reactivateAssertions;
- (void)_tearDownXPCConnection;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (void)updateStatusStringForAssertion:(id)arg1;

@end

