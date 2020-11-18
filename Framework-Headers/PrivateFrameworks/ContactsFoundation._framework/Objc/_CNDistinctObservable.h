//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSMutableSet;
@protocol CNObservable;

__attribute__((visibility("hidden")))
@interface _CNDistinctObservable : CNObservable
{
    id<CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (BOOL)_resultIsDistinct:(id)arg1;
- (void)dealloc;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end

