//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXTaskTracking-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSError, NSString, NSUUID, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, SVXTaskContext;
@protocol SVXTaskTracking, SVXTaskTrackingDelegate;

__attribute__((visibility("hidden")))
@interface SVXTaskTracker : NSObject <SVXTaskTracking>
{
    id<SVXTaskTrackingDelegate> _delegate;
    SVXTaskContext *_context;
    id<SVXTaskTracking> _parent;
    AFAnalyticsTurnBasedInstrumentationContext *_instrumentationContext;
}

@property (readonly, nonatomic) NSString *aceId;
@property (readonly, nonatomic) SVXActivationContext *activationContext;
@property (readonly, copy, nonatomic) SVXTaskContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) SVXDeactivationContext *deactivationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *dialogIdentifier;
@property (readonly, nonatomic) NSString *dialogPhase;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext; // @synthesize instrumentationContext=_instrumentationContext;
@property (readonly, nonatomic) BOOL isUUFR;
@property (readonly, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (readonly, nonatomic) BOOL listensAfterSpeaking;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) id<SVXTaskTracking> parent; // @synthesize parent=_parent;
@property (readonly, nonatomic) NSString *refId;
@property (readonly, nonatomic) NSUUID *requestUUID;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)beginChildWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 instrumentationContext:(id)arg2 delegate:(id)arg3;

@end
