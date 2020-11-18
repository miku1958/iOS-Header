//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClipServices/CPSAppInstalling-Protocol.h>

@class CPSAppBundleInstaller, FPArchiveService, NSString;
@protocol CPSAppInfoFetching;

@interface CPSAppInstaller : NSObject <CPSAppInstalling>
{
    CPSAppBundleInstaller *_appBundleInstaller;
    FPArchiveService *_archiveService;
    id<CPSAppInfoFetching> _appInfoFetcher;
}

@property (readonly, nonatomic) id<CPSAppInfoFetching> appInfoFetcher; // @synthesize appInfoFetcher=_appInfoFetcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAppInfoFetcher:(id)arg1;
- (void)installDownloadedAppWithBundleID:(id)arg1 localFilePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)stopStallingCurrentInstallation;

@end
