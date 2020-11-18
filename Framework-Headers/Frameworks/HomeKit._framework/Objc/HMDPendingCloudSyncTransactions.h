//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDHomeManager, NSArray, NSMutableArray, NSMutableDictionary;

@interface HMDPendingCloudSyncTransactions : NSObject
{
    BOOL _uploadInProgress;
    NSMutableDictionary *_pendingTransactionDictionary;
    NSMutableArray *_deltaTransactions;
    HMDHomeManager *_homeManager;
}

@property (readonly, nonatomic) unsigned long long count;
@property (strong, nonatomic) NSMutableArray *deltaTransactions; // @synthesize deltaTransactions=_deltaTransactions;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) NSMutableDictionary *pendingTransactionDictionary; // @synthesize pendingTransactionDictionary=_pendingTransactionDictionary;
@property (readonly, nonatomic) NSArray *transactions;
@property (nonatomic) BOOL uploadInProgress; // @synthesize uploadInProgress=_uploadInProgress;

+ (id)convertSaveReasonToTransationReason:(id)arg1;
+ (BOOL)isValidRequestTypeKey:(id)arg1;
+ (id)requestToIndentityTypeMapping;
- (void).cxx_destruct;
- (void)_addTransaction:(id)arg1 reason:(id)arg2 identities:(id)arg3;
- (void)_fixupPendingTransactions;
- (void)_loadTransactions:(id)arg1;
- (void)addTransaction:(id)arg1;
- (id)identitiesWithHome:(id)arg1 reason:(id)arg2;
- (id)init;
- (id)initWithTransaction:(id)arg1 homeManager:(id)arg2;
- (void)removePendingTransactionsForHome:(id)arg1;
- (void)reset;
- (void)startUpload;
- (void)stopUploadAndClean;
- (void)stopUploadAndResume;

@end

