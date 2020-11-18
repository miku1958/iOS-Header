//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>
{
}

@property (readonly, nonatomic) unsigned long long countOfOriginalImages;
@property (readonly, nonatomic) unsigned long long countOfOriginalOthers;
@property (readonly, nonatomic) unsigned long long countOfOriginalVideos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
@property (readonly) Class superclass;

- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)openWithError:(id *)arg1;
- (id)resourceTypesToUploadForUploadIdentifier:(id)arg1;
- (unsigned long long)scopeType;
- (BOOL)shouldUploadResource:(id)arg1;
- (BOOL)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 error:(id *)arg3;

@end

