//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;

@interface _EFSamplingObservable : EFObservable
{
    id<EFObservable> _observable;
    id<EFObservable> _sampler;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;
- (id)subscribe:(id)arg1;

@end

