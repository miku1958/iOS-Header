//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject
{
    NSSet *_eventDescriptors;
    NSMutableDictionary *_refreshTimerByEventDescriptor;
    CDUnknownBlockType _refreshTimerFiredBlock;
}

@property (copy, nonatomic) NSSet *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
@property (strong, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor; // @synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor;
@property (copy, nonatomic) CDUnknownBlockType refreshTimerFiredBlock; // @synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock;

- (void).cxx_destruct;
- (void)_cancelAllRefreshTimers;
- (void)_cancelRefreshTimer:(id)arg1;
- (void)_cancelRefreshTimers:(id)arg1;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;
- (void)_startRefreshTimer:(id)arg1;
- (void)dealloc;
- (void)invalidate;

@end
