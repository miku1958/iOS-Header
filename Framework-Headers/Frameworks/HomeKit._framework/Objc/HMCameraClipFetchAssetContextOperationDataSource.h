//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMCameraClipFetchAssetContextOperationDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;
- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;

@end
