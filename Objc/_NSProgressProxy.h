//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress
{
    id<NSProgressPublisher> _forwarder;
    BOOL _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (void)_invokeUnpublishingHandler;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)cancel;
- (void)dealloc;
- (BOOL)isOld;
- (void)pause;
- (void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unpublish;

@end

