//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier
{
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
}

- (void).cxx_destruct;
- (id)appLayouts;
- (unsigned long long)appLayoutsGenerationCount;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithAppLayouts:(id)arg1;
- (void)setState:(long long)arg1;

@end

