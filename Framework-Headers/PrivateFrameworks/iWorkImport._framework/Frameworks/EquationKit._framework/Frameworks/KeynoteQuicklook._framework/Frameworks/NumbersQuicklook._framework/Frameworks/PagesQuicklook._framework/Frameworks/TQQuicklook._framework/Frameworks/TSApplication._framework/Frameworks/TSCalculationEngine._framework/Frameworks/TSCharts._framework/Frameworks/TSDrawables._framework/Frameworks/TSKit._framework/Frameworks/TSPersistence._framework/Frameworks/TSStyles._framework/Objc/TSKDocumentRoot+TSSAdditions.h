//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKDocumentRoot.h>

@class TSSStylesheet, TSSTheme;

@interface TSKDocumentRoot (TSSAdditions)

@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly, nonatomic) TSSTheme *theme;

- (void)migrateStylesInObjects:(id)arg1;
- (void)migrateStylesInObjects:(id)arg1 changePropagationMap:(id)arg2;
- (id)migratedPresetForPreset:(id)arg1;
- (id)migratedPropertyMapForPropertyMap:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1;
- (BOOL)objectsNeedToBeMigrated:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
@end

