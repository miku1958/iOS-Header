//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore;
@protocol DOCTagRegistryDelegate;

@interface DOCTagRegistryICloudDataSource : NSObject
{
    NSUbiquitousKeyValueStore *_store;
    NSObject *_iCloudToken;
    id<DOCTagRegistryDelegate> _delegate;
}

@property (weak, nonatomic) id<DOCTagRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject *iCloudToken; // @synthesize iCloudToken=_iCloudToken;
@property (strong, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;

+ (BOOL)isICloudAvailable;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (id)initWithDelegate:(id)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)readTagsFromCloud:(BOOL)arg1;
- (void)syncTagsWithCloud:(BOOL)arg1;
- (void)ubiquityIdentityDidChange;
- (void)writeTagsToCloud;

@end
