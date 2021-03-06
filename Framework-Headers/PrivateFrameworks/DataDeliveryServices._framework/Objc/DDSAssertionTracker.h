//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetTracking-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol DDSAssertionDataHandling, DDSAssetTrackingDelegate, OS_dispatch_queue;

@interface DDSAssertionTracker : NSObject <DDSAssetTracking>
{
    id<DDSAssetTrackingDelegate> _delegate;
    NSMutableArray *_trackedAssertions;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_trackedAssertionSets;
    id<DDSAssertionDataHandling> _dataHandler;
}

@property (readonly, nonatomic) id<DDSAssertionDataHandling> dataHandler; // @synthesize dataHandler=_dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<DDSAssetTrackingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *trackedAssertionSets; // @synthesize trackedAssertionSets=_trackedAssertionSets;
@property (readonly, nonatomic) NSMutableArray *trackedAssertions; // @synthesize trackedAssertions=_trackedAssertions;

- (void).cxx_destruct;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (id)allAssertions;
- (id)assertionDueForUpdateFrom:(id)arg1 SinceDate:(id)arg2;
- (id)assertionDueForUpdateSinceDate:(id)arg1;
- (id)assertionIDsForClientID:(id)arg1;
- (void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
- (id)init;
- (id)initWithDataHandler:(id)arg1;
- (double)intervalForDownloadFrequency:(long long)arg1;
- (void)removeAssertionWithID:(id)arg1;
- (id)trackedAssetTypes;

@end

