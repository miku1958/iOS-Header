//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface TSPSupportMetadata : TSPObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    BOOL _isInCollaborationModeForArchiving;
    NSSet *_acknowledgedServerDataForArchiving;
}

- (void).cxx_destruct;
- (void)commonInit;
- (unsigned char)componentRequiredPackageIdentifier;
- (id)initWithContext:(id)arg1;
- (BOOL)isDataAcknowledgedByServer:(id)arg1;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)resetAcknowledgedServerData;
- (void)saveToArchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(BOOL)arg2;
- (void)takeSnapshotWithCollaborationMode:(BOOL)arg1;
- (long long)tsp_identifier;

@end

