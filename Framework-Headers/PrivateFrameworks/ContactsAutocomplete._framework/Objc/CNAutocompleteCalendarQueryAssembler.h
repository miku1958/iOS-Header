//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject
{
    CNObservable *_cachedObservable;
    CNObservable *_uncachedObservable;
    CNObservable *_rawCachedObservable;
    CNObservable *_rawUncachedObservable;
}

@property (readonly) CNObservable *cachedObservable; // @synthesize cachedObservable=_cachedObservable;
@property (readonly) CNObservable *rawCachedObservable; // @synthesize rawCachedObservable=_rawCachedObservable;
@property (readonly) CNObservable *rawUncachedObservable; // @synthesize rawUncachedObservable=_rawUncachedObservable;
@property (readonly) CNObservable *uncachedObservable; // @synthesize uncachedObservable=_uncachedObservable;

- (void).cxx_destruct;
- (void)assemble;
- (id)description;
- (id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2;

@end

