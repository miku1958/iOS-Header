//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy
{
    NSArray *_events;
}

@property (readonly, nonatomic) NSArray *events; // @synthesize events=_events;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)allEvents;
- (id)initWithEvents:(id)arg1;

@end

