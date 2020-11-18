//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

@class LSApplicationProxy, NSMutableSet, NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface FBApplicationPlaceholder : FBBundleInfo
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_isNewsstand;
    BOOL _queue_isRestricted;
    BOOL _queue_installType;
    double _queue_cachedPercentComplete;
    NSProgress *_queue_progress;
    NSMutableSet *_queue_observers;
}

@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long installPhase;
@property (readonly, nonatomic) unsigned long long installState;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic, getter=isNewsstand) BOOL newsstand;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (strong, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;

- (void)_dispatchToObservers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_iconDictionary;
- (id)_initWithApplicationProxy:(id)arg1;
- (double)_normalizedProgress:(double)arg1;
- (void)_noteChangedSignificantly;
- (id)_queue_observers;
- (void)_queue_progressChanged;
- (BOOL)_queue_setProgress:(id)arg1;
- (void)_queue_startObservingProgress:(id)arg1;
- (void)_queue_stopObservingProgress:(id)arg1;
- (void)_sendToObserversCancellabilityDidChange:(id)arg1;
- (void)_sendToObserversInstallPhaseDidChange:(id)arg1;
- (void)_sendToObserversInstallStateDidChange:(id)arg1;
- (void)_sendToObserversPausabilityDidChange:(id)arg1;
- (void)_sendToObserversPercentCompleteDidChange:(id)arg1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly:(id)arg1;
- (void)_sendToObserversPrioritizableDidChange:(id)arg1;
- (void)_setProxy:(id)arg1 force:(BOOL)arg2;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)prioritize;
- (void)removeObserver:(id)arg1;
- (void)resume;

@end

