//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSInvalidatable-Protocol.h>

@class BSAtomicSignal, BSSimpleAssertion, FBSSceneClientSettings, FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBWorkspace, NSString;
@protocol OS_dispatch_queue;

@interface FBSceneRemnant : NSObject <BSInvalidatable>
{
    FBWorkspace *_workspace;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    BSSimpleAssertion *_assertion;
    BSAtomicSignal *_invalidated;
}

@property (readonly, nonatomic) BSSimpleAssertion *_assertion; // @synthesize _assertion;
@property (readonly, copy, nonatomic) FBSSceneClientSettings *_clientSettings;
@property (readonly, nonatomic, getter=_hasBeenInvalidated) BOOL _invalidated;
@property (readonly, weak, nonatomic) FBWorkspace *_workspace; // @synthesize _workspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition; // @synthesize definition=_definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) FBSSceneSettings *lastSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithIdentity:(id)arg1 client:(id)arg2 workspace:(id)arg3 parameters:(id)arg4 assertionQueue:(id)arg5 assertion:(id)arg6;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
