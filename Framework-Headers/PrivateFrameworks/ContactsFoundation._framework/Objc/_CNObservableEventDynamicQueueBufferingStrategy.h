//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy
{
    CNQueue *_queue;
}

@property (readonly, nonatomic) CNQueue *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)allEvents;
- (id)initWithQueue:(id)arg1;

@end
