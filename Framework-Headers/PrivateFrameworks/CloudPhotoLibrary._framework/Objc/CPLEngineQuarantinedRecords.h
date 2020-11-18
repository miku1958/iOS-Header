//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)isRecordWithIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;

@end

