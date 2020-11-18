//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUParameterGroup.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AUAudioUnit_XH, NSObject;
@protocol OS_dispatch_queue, _AURemoteParameterSynchronization;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding>
{
    BOOL __autoCreatedForV2AU;
    BOOL __suppressObserverCallbacks;
    int _numRecorders;
    NSObject<OS_dispatch_queue> *_observationQueue;
    struct AUObserverController *_observerController;
    NSObject<OS_dispatch_queue> *_valueAccessQueue;
    AUAudioUnit_XH *__auXH;
    struct AURemoteParameterObserver *_remoteObserverToken;
    struct AURemoteParameterObserver *_remoteRecorderToken;
    id<_AURemoteParameterSynchronization> _remoteParameterSynchronizer;
    vector_2580a1ea _addrToParamIndex;
}

@property (nonatomic) AUAudioUnit_XH *_auXH; // @synthesize _auXH=__auXH;
@property (nonatomic) BOOL _autoCreatedForV2AU; // @synthesize _autoCreatedForV2AU=__autoCreatedForV2AU;
@property (nonatomic) BOOL _suppressObserverCallbacks; // @synthesize _suppressObserverCallbacks=__suppressObserverCallbacks;
@property (nonatomic) vector_2580a1ea addrToParamIndex; // @synthesize addrToParamIndex=_addrToParamIndex;
@property (nonatomic) int numRecorders; // @synthesize numRecorders=_numRecorders;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // @synthesize observationQueue=_observationQueue;
@property (nonatomic) struct AUObserverController *observerController; // @synthesize observerController=_observerController;
@property (nonatomic) struct AURemoteParameterObserver *remoteObserverToken; // @synthesize remoteObserverToken=_remoteObserverToken;
@property (nonatomic) id<_AURemoteParameterSynchronization> remoteParameterSynchronizer; // @synthesize remoteParameterSynchronizer=_remoteParameterSynchronizer;
@property (nonatomic) struct AURemoteParameterObserver *remoteRecorderToken; // @synthesize remoteRecorderToken=_remoteRecorderToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *valueAccessQueue; // @synthesize valueAccessQueue=_valueAccessQueue;

+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
+ (id)createTreeWithChildren:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_checkInitTreeObservation;
- (void)_init2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;

@end
