//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol BRContainerHelper, NSObject, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    BOOL _didFetchAllContainers;
    struct br_pacer_t *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
}

+ (id)containerCache;
- (id)_allContainersByIDNoCopy;
- (void)_containerListDidChange;
- (void)_invalidate;
- (id)allContainers;
- (id)allContainersByID;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)documentContainers;
- (id)initWithHelper:(id)arg1;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
