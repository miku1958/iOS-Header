//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXPaths : NSObject
{
}

+ (id)_getDirectoryCreating:(BOOL)arg1;
+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectory;
+ (id)appPredictionDirectoryFile:(id)arg1;
+ (id)biomeStreamsRootDirectory;
+ (id)clientModelCachesRootDirectory;
+ (void)createDataVault:(id)arg1;
+ (void)createDirectoriesIfNeeded;
+ (id)feedbackRootDirectory;
+ (id)focusModesAppScoresFile;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)metricsRootDirectory;
+ (id)trialFolderResourcePath;
+ (id)uiCachesRootDirectory;

@end
