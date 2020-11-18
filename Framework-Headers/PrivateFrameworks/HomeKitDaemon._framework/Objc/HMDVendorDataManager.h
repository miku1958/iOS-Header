//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDVendorDataManager : HMFObject <HMFTimerDelegate>
{
    NSDictionary *_vendorModelEntries;
    long long _dataVersion;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURLSession *_urlSession;
    HMFTimer *_fetchTimer;
}

@property (nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property (strong, nonatomic) NSDictionary *vendorModelEntries; // @synthesize vendorModelEntries=_vendorModelEntries;

+ (id)dbURL;
+ (id)sharedVendorDataManager;
- (void).cxx_destruct;
- (void)_fetchDataFromServer;
- (void)_handleData:(id)arg1 fromServerWithError:(id)arg2;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_initWithLocalFile;
- (BOOL)_isSameVendorList:(id)arg1;
- (id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (BOOL)_parseDatabaseFromDictionary:(id)arg1;
- (id)_parseManufacturersList:(id)arg1;
- (void)_saveToLocalFile:(id)arg1;
- (id)init;
- (void)start;
- (void)timerDidFire:(id)arg1;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;

@end

