//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDiagnostics : NSObject
{
}

+ (id)_memoriesRelatedOutputPathBaseDirectory;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(CDUnknownBlockType)arg3;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolder;
+ (id)diagnosticsURLs;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)excludingNameExpression;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (id)logDirectoryURL;
+ (id)matchingNameExpression;
+ (id)memoriesAndRelatedDiagnosticsOutputURL;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2;

@end

