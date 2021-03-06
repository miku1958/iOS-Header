//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface CKDProgressTracker : NSObject
{
    BOOL _hasCachedTotalBytes;
    BOOL _hasCachedCompletedBytes;
    double _lastItemPercentage;
    unsigned long long _cachedTotalBytes;
    unsigned long long _cachedCompletedBytes;
    NSMapTable *_completedBytesByItems;
    NSString *_trackingID;
}

@property (nonatomic) unsigned long long cachedCompletedBytes; // @synthesize cachedCompletedBytes=_cachedCompletedBytes;
@property (nonatomic) unsigned long long cachedTotalBytes; // @synthesize cachedTotalBytes=_cachedTotalBytes;
@property (strong, nonatomic) NSMapTable *completedBytesByItems; // @synthesize completedBytesByItems=_completedBytesByItems;
@property (nonatomic) BOOL hasCachedCompletedBytes; // @synthesize hasCachedCompletedBytes=_hasCachedCompletedBytes;
@property (nonatomic) BOOL hasCachedTotalBytes; // @synthesize hasCachedTotalBytes=_hasCachedTotalBytes;
@property (nonatomic) double lastItemPercentage; // @synthesize lastItemPercentage=_lastItemPercentage;
@property (strong, nonatomic) NSString *trackingID; // @synthesize trackingID=_trackingID;

+ (unsigned long long)_sizeForItem:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)_updateTotalBytes;
- (unsigned long long)_updateTotalCompletedBytes;
- (id)init;
- (id)initWithTrackingID:(id)arg1;
- (void)startTrackingItems:(id)arg1;
- (void)stopTrackingItems:(id)arg1;
- (double)updateProgressWithItem:(id)arg1 progress:(double)arg2;

@end

