//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService
{
}

+ (BOOL)isServiceAvailableForProviders:(id)arg1;
- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id *)arg1;
- (id)parseProviderItemsSummary:(id)arg1 error:(id *)arg2;
- (id)settingsViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id *)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)title;
- (void)writeErrorsToErrorLog:(id)arg1;
- (id)writeGraphData:(id)arg1 errorsList:(id)arg2;
- (id)writeGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)arg1 errorsList:(id)arg2;

@end

