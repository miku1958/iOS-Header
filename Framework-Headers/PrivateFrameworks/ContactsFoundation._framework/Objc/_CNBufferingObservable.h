//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray;
@protocol CNObservable;

__attribute__((visibility("hidden")))
@interface _CNBufferingObservable : CNObservable
{
    id<CNObservable> _observable;
    NSMutableArray *_results;
    unsigned long long _bufferLength;
}

- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;
- (id)subscribe:(id)arg1;

@end

