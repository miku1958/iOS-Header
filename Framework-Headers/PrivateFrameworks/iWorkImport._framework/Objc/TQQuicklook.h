//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDocumentResourceFileURLProvider-Protocol.h>

@class NSBundle, NSString, TSABaseApplicationDelegate, TSACirrusDocument, TSUTemporaryDirectory;
@protocol TSKRenderingExporter;

__attribute__((visibility("hidden")))
@interface TQQuicklook : NSObject <TSPDocumentResourceFileURLProvider>
{
    NSString *mPath;
    TSACirrusDocument *mDocument;
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSUTemporaryDirectory *mTemporaryDirectory;
    NSString *mPassphrase;
    id<TSKRenderingExporter> mExporter;
    NSBundle *mInstalledGingerBundle;
    NSBundle *mInstalledSageBundle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)loadAssetColorMap;
+ (id)tsuColorFromColorArray:(id)arg1;
+ (void)unloadAssetColorMap;
- (Class)appDelegateClass;
- (void)close;
- (void)dealloc;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
- (struct __CFString *)getIdentifierForApp:(id)arg1;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2;
- (BOOL)load;
- (id)newPDFForPageNumber:(unsigned long long)arg1;
- (id)newPDFPreviewAndClose;
- (unsigned long long)pageCount;
- (id)sheetNameForPageNumber:(unsigned long long)arg1 isForm:(BOOL *)arg2;
- (id)thumbnail;
- (BOOL)writePreviewToOutput:(id)arg1 pageNumber:(unsigned long long)arg2;

@end

