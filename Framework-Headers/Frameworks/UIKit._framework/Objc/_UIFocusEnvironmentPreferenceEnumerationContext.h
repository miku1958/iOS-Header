//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusEnvironmentPreferenceEnumerationContext-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, UIFocusSystem, _UIDebugLogReport;
@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext>
{
    UIFocusSystem *_focusSystem;
    NSMutableArray *_visitedEnvironmentStack;
    id<UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    BOOL _hasResolvedPreferredFocusEnvironments;
    BOOL _hasNeverPopped;
    BOOL _cachedPrefersNothingFocused;
    id<UIFocusEnvironment> _environment;
    id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;
    _UIDebugLogReport *_debugReport;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property (weak, nonatomic) id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<UIFocusEnvironment> environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isLeafPreference;
@property (readonly, nonatomic) BOOL isPrimaryPreference;
@property (readonly, nonatomic, getter=isPreferredByItself) BOOL preferredByItself;
@property (readonly, nonatomic) NSArray *preferredEnvironments;
@property (readonly, nonatomic) id<UIFocusEnvironment> preferringEnvironment;
@property (readonly, nonatomic) BOOL prefersNothingFocused; // @synthesize prefersNothingFocused=_cachedPrefersNothingFocused;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inferPreferencesForEnvironment:(id)arg1;
- (void)_invalidatePreferredEnvironments;
- (BOOL)_isAllowedToPreferEnvironment:(id)arg1;
- (void)_reportInferredPreferredFocusEnvironment:(id)arg1;
- (void)_resolvePreferredFocusEnvironments;
- (id)init;
- (id)initWithInitialFocusEnvironment:(id)arg1;
- (void)popEnvironment;
- (void)pushEnvironment:(id)arg1;

@end

