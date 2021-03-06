//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKit/UIDocumentPickerDelegate-Protocol.h>
#import <ActionKit/WFFileStorageService-Protocol.h>

@class NSMapTable, NSProgress, NSString, WFContentAttributionSet;
@protocol OS_dispatch_queue;

@interface WFiCloudStorageService : NSObject <UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, WFFileStorageService>
{
    NSMapTable *_documentPickerCompletionTable;
    NSObject<OS_dispatch_queue> *_documentPickerDownloadQueue;
    NSProgress *_progress;
}

@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) WFContentAttributionSet *contentAttributionSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *documentPickerCompletionTable; // @synthesize documentPickerCompletionTable=_documentPickerCompletionTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *documentPickerDownloadQueue; // @synthesize documentPickerDownloadQueue=_documentPickerDownloadQueue;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) Class objectRepresentationClass;
@property (weak, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;

+ (id)containerIdentifier;
+ (id)containerName;
+ (void)createDocumentsDirectoryIfNecessary;
+ (id)documentsDirectoryWithError:(id *)arg1;
+ (Class)resultItemClass;
+ (id)serviceName;
- (void).cxx_destruct;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completeOperationForDocumentPicker:(id)arg1 withFileURLs:(id)arg2 error:(id)arg3;
- (CDUnknownBlockType)completionHandlerForDocumentPicker:(id)arg1;
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentDocumentPicker:(id)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)retrieveFilesWithUserInterface:(id)arg1 initialDirectoryPath:(id)arg2 consumingBundleID:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 userInterface:(id)arg3 consumingBundleID:(id)arg4 options:(unsigned long long)arg5 progress:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1 forDocumentPicker:(id)arg2;
- (id)supportedPickerContentTypes;

@end

