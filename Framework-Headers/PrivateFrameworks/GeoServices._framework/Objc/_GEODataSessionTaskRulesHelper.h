//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskRules-Protocol.h>

@class NSHashTable, NSString;
@protocol GEODataSessionTask, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesHelper : NSObject <GEODataSessionTaskRules>
{
    id<GEODataSessionTask> _xpcTask;
    id<GEODataSessionTask> _urlTask;
    id<GEODataSessionTask> _completedSubtask;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_isolation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversOfCompletedSubtask;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (id)init;
- (id)initForType:(unsigned long long)arg1;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)setSubtask:(id)arg1 ofType:(unsigned long long)arg2;

@end
