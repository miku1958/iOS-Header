//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/ATXHomeScreenSuggestionClientObserver-Protocol.h>

@class ATXHomeScreenPrediction, NSHashTable, NSString, SBHIconManager;

@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver>
{
    NSHashTable *_observers;
    ATXHomeScreenPrediction *_currentPrediction;
    SBHIconManager *_iconManager;
}

@property (strong, nonatomic) ATXHomeScreenPrediction *currentPrediction; // @synthesize currentPrediction=_currentPrediction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // @synthesize iconManager=_iconManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_iconDataSourceInIcon:(id)arg1 withUniqueIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 widgetKind:(id)arg4 suggestion:(BOOL)arg5;
- (void)addObserver:(id)arg1;
- (id)iconModel;
- (id)initWithIconManager:(id)arg1;
- (void)processUpdatedPredictions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)rootFolder;
- (void)suggestionClientDidRefreshSuggestions:(id)arg1;
- (void)updatePredictions;

@end
