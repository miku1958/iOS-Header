//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray, TSDMovieInfo, TSKWarning;

@protocol TSKImportExportDelegate <NSObject>

@property (readonly, nonatomic) BOOL importingDesignDemoDoc;
@property (readonly, nonatomic) BOOL isBrowsingVersions;

- (void)addWarning:(TSKWarning *)arg1;
- (void)removeWarning:(TSKWarning *)arg1;
- (NSArray *)warnings;

@optional
- (void)addIncompatibleMovieInfo:(TSDMovieInfo *)arg1 withCompatibilityLevel:(long long)arg2;
- (void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
@end

