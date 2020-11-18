//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSFilePresenter-Protocol.h>

@class NSDate, NSFileVersion, NSOperationQueue, NSSet, NSString, NSURL;

@interface GKSavedGameDocument : NSObject <NSFilePresenter>
{
    BOOL _hasConflict;
    BOOL _isConflictVersion;
    NSURL *_fileURL;
    NSString *_name;
    NSFileVersion *_fileVersion;
    NSString *_deviceName;
    NSDate *_modificationDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (strong, nonatomic) NSFileVersion *fileVersion; // @synthesize fileVersion=_fileVersion;
@property (nonatomic) BOOL hasConflict; // @synthesize hasConflict=_hasConflict;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isConflictVersion; // @synthesize isConflictVersion=_isConflictVersion;
@property (strong, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (id)currentDeviceName;
- (void)dealloc;
- (void)deleteAllVersionsIncludingCurrent:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadata;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMetadata:(id)arg1;
- (void)updateConflictStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateMetadata;

@end
