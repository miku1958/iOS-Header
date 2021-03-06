//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    int _sampleID;
    long long _updateType;
}

@property (readonly, nonatomic) BOOL hasRemoteData;
@property (readonly, nonatomic) BOOL inheritAttributes;
@property (readonly, nonatomic) BOOL isSavingCurrentDocument;
@property (nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;

- (void).cxx_destruct;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (void)addRemoteData:(id)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasNewStorageForData:(id)arg1;
- (id)init;
- (id)initWithUpdateType:(long long)arg1;

@end

