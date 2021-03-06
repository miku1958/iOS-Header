//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CLSCurationDebugObject : NSObject
{
    NSMutableArray *_stateHistory;
    unsigned long long _tentativeSectionStateHistoryLength;
    unsigned long long _stateAtBeginningOfTentativeSection;
    unsigned long long _state;
}

@property (readonly) unsigned long long state; // @synthesize state=_state;
@property (readonly) NSArray *stateHistory; // @synthesize stateHistory=_stateHistory;

+ (id)stringForState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)beginTentativeSection;
- (id)dictionaryRepresentation;
- (void)endTentativeSectionWithSuccess:(BOOL)arg1;
- (id)init;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4;
- (id)timestamp;

@end

