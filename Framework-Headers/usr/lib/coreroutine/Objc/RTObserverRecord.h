//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTObserverRecord : NSObject
{
    id _observer;
    SEL _selector;
}

@property (weak, nonatomic) id observer; // @synthesize observer=_observer;
@property (nonatomic) SEL selector; // @synthesize selector=_selector;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;

@end

