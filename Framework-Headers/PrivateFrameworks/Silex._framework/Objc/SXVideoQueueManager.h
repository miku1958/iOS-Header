//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoQueueManager-Protocol.h>
#import <Silex/SXVideoQueueObserving-Protocol.h>
#import <Silex/SXVideoQueueProviding-Protocol.h>
#import <Silex/SXVideoTransitionObserver-Protocol.h>

@class NSMutableArray, NSString;
@protocol SXVideo, SXVideoQueue;

@interface SXVideoQueueManager : NSObject <SXVideoTransitionObserver, SXVideoQueueProviding, SXVideoQueueObserving, SXVideoQueueManager>
{
    id<SXVideoQueue> _queue;
    NSMutableArray *_updateBlocks;
    NSMutableArray *_modifiers;
    id<SXVideo> _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *modifiers; // @synthesize modifiers=_modifiers;
@property (copy, nonatomic) id<SXVideoQueue> queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property (strong, nonatomic) id<SXVideo> video; // @synthesize video=_video;

- (void).cxx_destruct;
- (void)addModifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)onUpdate:(CDUnknownBlockType)arg1;
- (void)removeModifier:(id)arg1;
- (void)replaceCurrentQueueWithQueue:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
