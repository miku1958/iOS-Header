//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class FBSProcessAssertion, FBSProcessExecutionPolicy, FBSProcessWatchdog, NSString;
@protocol FBSProcess, FBSSceneHandle;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    NSString *_identifier;
    id<FBSSceneHandle> _scene;
    FBSProcessExecutionPolicy *_executionPolicy;
    CDUnknownBlockType _errorHandler;
    BOOL _open;
    BOOL _invalidated;
    id<FBSProcess> _process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @dynamic errorHandler;
@property (copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy; // @synthesize executionPolicy=_executionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property (weak, nonatomic) id<FBSSceneHandle> scene; // @synthesize scene=_scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isValid;
- (void)close;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3;
- (void)invalidate;
- (void)open;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
