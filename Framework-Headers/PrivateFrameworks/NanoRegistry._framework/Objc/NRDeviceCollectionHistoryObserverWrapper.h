//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NRDeviceCollectionHistoryObserverWrapper : NSObject
{
    CDUnknownBlockType _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;

@end
