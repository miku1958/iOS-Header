//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore;
@protocol DOCTagRegistryDelegate, OS_dispatch_queue;

@interface DOCTagRegistryICloudDataSource : NSObject
{
    NSUbiquitousKeyValueStore *_store;
    NSObject *_iCloudToken;
    NSObject<OS_dispatch_queue> *_workingQueue;
    id<DOCTagRegistryDelegate> _delegate;
}

@property (weak, nonatomic) id<DOCTagRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject *iCloudToken; // @synthesize iCloudToken=_iCloudToken;
@property (strong, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (void)iCloudTokenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)isICloudAvailableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)readTagsFromCloud:(BOOL)arg1;
- (void)syncTagsWithCloud:(BOOL)arg1;
- (void)syncTagsWithCloud:(BOOL)arg1 isICloudAvailable:(BOOL)arg2;
- (void)ubiquityIdentityDidChange;
- (void)writeTagsToCloud;

@end

