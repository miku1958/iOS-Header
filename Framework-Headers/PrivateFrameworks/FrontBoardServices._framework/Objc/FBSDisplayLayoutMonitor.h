//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString, _FBSDisplayLayoutServiceAssertion;

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;
    BOOL _lock_invalidated;
    BSServiceConnectionEndpoint *_deprecated_endpoint;
    CDUnknownBlockType _lock_deprecated_handler;
    NSMapTable *_lock_deprecated_observerAssertions;
    BOOL _deprecated_qos;
    long long _deprecated_displayType;
    BOOL _deprecated_singleton;
    BOOL _deprecated_mutable;
}

@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_endpointForDisplayType:(long long)arg1;
+ (id)interface;
+ (id)mainDisplayInstanceIdentifier;
+ (id)monitorWithConfiguration:(id)arg1;
+ (id)serviceIdentifier;
+ (id)sharedMonitorForDisplayType:(long long)arg1;
- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1 singleton:(BOOL)arg2 needsDefaultPriority:(BOOL)arg3 mutable:(BOOL)arg4 displayType:(long long)arg5 mutableHandler:(CDUnknownBlockType)arg6;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (long long)displayType;
- (CDUnknownBlockType)handler;
- (id)init;
- (id)initWithDisplayType:(long long)arg1;
- (id)initWithDisplayType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (unsigned long long)qualityOfService;
- (void)removeObserver:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1;

@end

