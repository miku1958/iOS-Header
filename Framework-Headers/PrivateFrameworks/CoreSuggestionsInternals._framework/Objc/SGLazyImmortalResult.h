//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGLazyResult.h>

@interface SGLazyImmortalResult : SGLazyResult
{
    _Atomic BOOL _done;
}

- (id)_initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;
- (id)resultIfAvailable;

@end
