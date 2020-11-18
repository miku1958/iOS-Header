//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGCuratedEventKey, SGEntity;

@interface SGRealtimeEventResponse : NSObject
{
    int _state;
    SGEntity *_entity;
    SGCuratedEventKey *_duplicateEventKey;
    NSString *_templateShortName;
}

@property (readonly, nonatomic) SGCuratedEventKey *duplicateEventKey; // @synthesize duplicateEventKey=_duplicateEventKey;
@property (readonly, nonatomic) SGEntity *entity; // @synthesize entity=_entity;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (readonly, nonatomic) NSString *templateShortName; // @synthesize templateShortName=_templateShortName;

- (void).cxx_destruct;
- (id)initCancellationOfCuratedEvent:(id)arg1 templateShortName:(id)arg2 entity:(id)arg3;
- (id)initDuplicateOfCuratedEvent:(id)arg1 withEntity:(id)arg2;
- (id)initNewEventWithEntity:(id)arg1;
- (id)initUpdatedEventWithEntity:(id)arg1 curatedEventKey:(id)arg2;
- (id)initWithEntity:(id)arg1 state:(int)arg2 duplicateEventKey:(id)arg3 templateShortName:(id)arg4;

@end

