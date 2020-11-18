//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSString, _XCKVOExpectationImplementation;

@interface XCTKVOExpectation : XCTestExpectation
{
    _XCKVOExpectationImplementation *_internal;
}

@property (readonly) id expectedValue;
@property (copy) CDUnknownBlockType handler;
@property (strong) _XCKVOExpectationImplementation *internal; // @synthesize internal=_internal;
@property (readonly, copy) NSString *keyPath;
@property (readonly) id observedObject;
@property (readonly) unsigned long long options;

- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 options:(unsigned long long)arg4;

@end
