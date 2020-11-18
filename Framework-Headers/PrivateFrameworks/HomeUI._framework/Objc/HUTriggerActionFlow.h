//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUTriggerActionFlow : NSObject
{
    BOOL _hasChangedState;
    unsigned long long _flowState;
}

@property (readonly, nonatomic) unsigned long long flowState; // @synthesize flowState=_flowState;
@property (readonly, nonatomic) BOOL hasChangedState; // @synthesize hasChangedState=_hasChangedState;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isLastState;
@property (readonly, nonatomic) BOOL isSingleFlow;
@property (readonly, nonatomic) BOOL isStandalone;

+ (id)selectFlowForState:(unsigned long long)arg1;
- (unsigned long long)_nextState;
- (id)getNextState;
- (id)initWithEditorMode:(unsigned long long)arg1;
- (id)initWithFlowState:(unsigned long long)arg1;
- (id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(BOOL)arg2;

@end
