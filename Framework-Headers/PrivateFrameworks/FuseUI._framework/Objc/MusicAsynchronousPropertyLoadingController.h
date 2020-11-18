//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMapTable, NSMutableArray, NSOperationQueue;

@interface MusicAsynchronousPropertyLoadingController : NSObject
{
    NSOperationQueue *_asynchronousPropertyLoadingOperationQueue;
    NSCountedSet *_contentDescriptorsBeingObserved;
    NSMapTable *_contentDescriptorsToAllPropertiesToLoadAsynchronously;
    NSMapTable *_entityViewToAsynchronousPropertyLoadOperation;
    NSMutableArray *_visibleEntityViews;
}

- (void).cxx_destruct;
- (BOOL)_baseEntityValueProviderSupportsConcurrentLoadingOfEntityProperties:(id)arg1;
- (void)_cancelPendingAsynchronousPropertyLoadOperationForEntityView:(id)arg1;
- (void)_didCompleteAsynchronousPropertyLoadForEntityView:(id)arg1 fromBaseEntityValueProvider:(id)arg2 values:(id)arg3;
- (void)_didEndDisplayingEntityViewWithContentDescriptor:(id)arg1;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_rescheduleAsynchronousPropertyLoadingForEntityView:(id)arg1;
- (void)_willDisplayEntityViewWithContentDescriptor:(id)arg1;
- (void)dealloc;
- (void)didEndDisplayingEntityView:(id)arg1;
- (void)willDisplayEntityView:(id)arg1;

@end

