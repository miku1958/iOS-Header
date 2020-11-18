//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceEnginePreferencesDelegate-Protocol.h>

@class NSMapTable, NSString, RERelevanceEnginePreferences;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate>
{
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetEffectivePreferences;
- (id)init;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;

@end

