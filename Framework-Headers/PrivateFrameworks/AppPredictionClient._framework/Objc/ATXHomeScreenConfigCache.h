//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ATXHomeScreenConfigCache : NSObject
{
    NSString *_rootPath;
}

+ (BOOL)_appPredictionPanelExistsInPages:(id)arg1;
+ (BOOL)_suggestionsWidgetExistsInPages:(id)arg1;
+ (BOOL)appPredictionPanelExistsOnHomeScreenOrTodayPage;
+ (BOOL)suggestionsWidgetExistsOnHomeScreenOrTodayPage;
- (void).cxx_destruct;
- (id)_filePathForDockConfig;
- (id)_filePathForHomeScreenPageConfig;
- (id)_filePathForTodayPage;
- (id)_readDataFromFileAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_writeData:(id)arg1 toFileAtPath:(id)arg2;
- (BOOL)_writeRootObject:(id)arg1 toFileAtPath:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)loadDockAppListWithError:(id *)arg1;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)arg1 error:(id *)arg2;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)arg1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)arg1;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)arg1;
- (id)prettyPrintedJSON;
- (BOOL)writeDockAppList:(id)arg1 error:(id *)arg2;
- (BOOL)writeHomeScreenPageConfigurations:(id)arg1 error:(id *)arg2;
- (BOOL)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 error:(id *)arg3;

@end
