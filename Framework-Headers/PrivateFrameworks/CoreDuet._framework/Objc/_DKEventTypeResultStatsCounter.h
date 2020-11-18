//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

@property (strong) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;
- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(BOOL)arg2;
- (id)eventName;
- (id)eventType;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(BOOL)arg3;
- (void)incrementCountWithTypeValue:(id)arg1 success:(BOOL)arg2;
- (id)typeValues;

@end

