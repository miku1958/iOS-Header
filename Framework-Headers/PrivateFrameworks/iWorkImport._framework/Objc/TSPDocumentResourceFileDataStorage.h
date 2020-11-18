//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

#import <iWorkImport/TSPDocumentResourceDataStorageInfo-Protocol.h>

@class NSString, TSPDocumentResourceInfo;
@protocol TSUResourceFileURLProvider><TSUResourceRequest, TSUResourceRequest;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDocumentResourceDataStorageInfo>
{
    id<TSUResourceFileURLProvider><TSUResourceRequest> _resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<TSUResourceRequest> resourceRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)documentResourceLocator;
- (id)downloadProgress;
- (unsigned long long)encodedLength;
- (id)fallbackColor;
- (id)fileURL;
- (id)init;
- (id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2;
- (BOOL)isReadable;
- (unsigned long long)length;
- (BOOL)needsDownload;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (struct CGSize)pixelSize;

@end
