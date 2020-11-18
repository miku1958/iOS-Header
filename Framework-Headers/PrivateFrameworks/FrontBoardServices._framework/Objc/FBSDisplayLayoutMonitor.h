//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSDisplayLayoutMonitorClientDelegate-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitorClient, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface FBSDisplayLayoutMonitor : NSObject <FBSDisplayLayoutMonitorClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _displayType;
    BOOL _queue_invalidated;
    NSHashTable *_queue_observers;
    FBSDisplayLayout *_queue_currentLayout;
    CDUnknownBlockType _queue_handler;
    FBSDisplayLayoutMonitorClient *_queue_client;
    BOOL _sharedInstance;
    unsigned long long _qualityOfService;
}

@property (readonly, strong, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (readonly) Class superclass;

+ (id)sharedMonitorForDisplayType:(long long)arg1;
- (void)_calloutQueue_postLayout:(id)arg1 withContext:(id)arg2 toObserver:(id)arg3;
- (id)_observers;
- (void)_queue_updateClient;
- (void)_queue_updateLayout:(id)arg1 withContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 handleNewDisplayLayout:(id)arg2 withContext:(id)arg3;
- (long long)clientDisplayType:(id)arg1;
- (unsigned long long)clientQualityOfService:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayType:(long long)arg1;
- (id)initWithDisplayType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)removeObserver:(id)arg1;

@end

