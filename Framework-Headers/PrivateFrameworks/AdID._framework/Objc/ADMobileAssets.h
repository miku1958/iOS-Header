//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBackgroundTaskRequest, NSArray, NSDate, NSNumber, NSString, NSURL;
@protocol OS_dispatch_queue_global;

@interface ADMobileAssets : NSObject
{
    BOOL _operationInProgress;
    NSString *_assetType;
    NSString *_version;
    NSURL *_assetPath;
    NSNumber *_maxQueryElements;
    NSArray *_lookbackPeriods;
    ADBackgroundTaskRequest *_task;
    NSDate *_creationTime;
    NSObject<OS_dispatch_queue_global> *_assetQueue;
}

@property (strong, nonatomic) NSURL *assetPath; // @synthesize assetPath=_assetPath;
@property (strong, nonatomic) NSObject<OS_dispatch_queue_global> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property (strong, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property (strong, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property (strong, nonatomic) NSArray *lookbackPeriods; // @synthesize lookbackPeriods=_lookbackPeriods;
@property (strong, nonatomic) NSNumber *maxQueryElements; // @synthesize maxQueryElements=_maxQueryElements;
@property BOOL operationInProgress; // @synthesize operationInProgress=_operationInProgress;
@property (strong, nonatomic) ADBackgroundTaskRequest *task; // @synthesize task=_task;
@property (strong, nonatomic) NSString *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)createAppUsageVectors:(CDUnknownBlockType)arg1;
- (void)doneWithOperations;
- (void)downloadAssetCatalog:(CDUnknownBlockType)arg1;
- (void)findProperAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 andTask:(id)arg2;
- (void)queryAssetData:(CDUnknownBlockType)arg1;
- (BOOL)shouldStartOperations;

@end
