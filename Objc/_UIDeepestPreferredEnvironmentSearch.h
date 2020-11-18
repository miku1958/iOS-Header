//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIDeepestPreferredEnvironmentSearch : NSObject
{
    BOOL _allowsFocusRestoration;
    _UIDebugLogReport *_debugReport;
}

@property (nonatomic) BOOL allowsFocusRestoration; // @synthesize allowsFocusRestoration=_allowsFocusRestoration;
@property (strong, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;

- (void).cxx_destruct;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;
- (void)_reportFoundFocusableItem:(id)arg1;
- (void)_reportSearchingEnvironment:(id)arg1;
- (void)_reportStartingSearch;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 inFocusSystem:(id)arg2;

@end
