//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableDictionary, NSString;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableDictionary *_perTransactionRemappedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fixupRemappedDeletesAndReturnBestCloudIdentifierFromRemappedIdentifiers:(id)arg1 fallback:(id)arg2;
- (void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1;
- (id)realIdentifierForRemappedIdentifier:(id)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(BOOL)arg3;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
