//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TUTestState : NSObject
{
    NSMutableDictionary *_objects;
    int _signalCount;
}

@property (readonly, nonatomic) int signalCount; // @synthesize signalCount=_signalCount;

- (void).cxx_destruct;
- (id)description;
- (void)incrementIntegerForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)signal;
- (int)waitWithTimeout:(double)arg1;

@end

