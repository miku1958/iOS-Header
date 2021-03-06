//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtilsUI/CUActivatable-Protocol.h>
#import <CoreUtilsUI/CUUIEnvironmentable-Protocol.h>

@class CUNavigationController, CUUIEnvironment, UIWindow;
@protocol OS_dispatch_queue;

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_uiQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUUIEnvironment *_environment;
    CUNavigationController *_navigationController;
    UIWindow *_window;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) CUUIEnvironment *environment; // @synthesize environment=_environment;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong, nonatomic) CUNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) UIWindow *window; // @synthesize window=_window;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;

@end

