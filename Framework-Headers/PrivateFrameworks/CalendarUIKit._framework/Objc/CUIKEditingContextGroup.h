//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKObjectGroup, EKEventStore, NSMutableArray, NSNumber, NSSet;

@interface CUIKEditingContextGroup : NSObject
{
    CUIKObjectGroup *_objectGroup;
    NSSet *_openContexts;
    EKEventStore *_eventStore;
    NSMutableArray *_additionalObjectGroups;
    NSNumber *_spanDecisionAsNumber;
    NSNumber *_earlyCommitDecisionAsNumber;
}

@property (strong) NSMutableArray *additionalObjectGroups; // @synthesize additionalObjectGroups=_additionalObjectGroups;
@property (strong) NSNumber *earlyCommitDecisionAsNumber; // @synthesize earlyCommitDecisionAsNumber=_earlyCommitDecisionAsNumber;
@property (weak) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (strong) CUIKObjectGroup *objectGroup; // @synthesize objectGroup=_objectGroup;
@property (strong) NSSet *openContexts; // @synthesize openContexts=_openContexts;
@property (strong) NSNumber *spanDecisionAsNumber; // @synthesize spanDecisionAsNumber=_spanDecisionAsNumber;

- (void).cxx_destruct;

@end

