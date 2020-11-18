//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredInsertionSwitcherModifierEvent : SBSwitcherModifierEvent
{
    NSUUID *_tetheredInsertionID;
    unsigned long long _phase;
}

@property (readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property (readonly, nonatomic) NSUUID *tetheredInsertionID; // @synthesize tetheredInsertionID=_tetheredInsertionID;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTetheredInsertionID:(id)arg1 phase:(unsigned long long)arg2;
- (long long)type;

@end
