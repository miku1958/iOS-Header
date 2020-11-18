//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperationLocator.h>

@interface FPActionOperationLocator (Daemon)

@property (readonly, nonatomic) BOOL isDownloaded;

+ (BOOL)_isMoveAcrossZonesOrSharedRootsForSource:(id)arg1 destination:(id)arg2;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(BOOL)arg2 isCopy:(BOOL)arg3 extensionManager:(id)arg4;
- (id)materializedURLWithDomain:(id)arg1;
- (id)materializedURLWithExtensionManager:(id)arg1;
- (BOOL)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;
@end
