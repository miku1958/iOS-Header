//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualAlert/AXNotificationHandler.h>

@interface AXLocalNotificationHandler : AXNotificationHandler
{
    id _opaqueObserver;
}

@property (strong, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver; // @synthesize _opaqueObserver;

- (void).cxx_destruct;
- (id)_notificationTypeDescription;
- (void)_startObserving;
- (void)_startObservingWithObject:(id)arg1;
- (void)_stopObserving;
- (void)_stopObservingWithObject:(id)arg1;

@end

