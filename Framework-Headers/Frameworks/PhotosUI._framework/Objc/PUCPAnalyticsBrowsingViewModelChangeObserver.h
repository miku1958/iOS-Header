//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUCPAnalyticsBrowsingViewModelChangeObserver : NSObject <PUBrowsingViewModelChangeObserver>
{
    BOOL _isTracking;
    long long _viewTimeSignpostID;
    id<PUDisplayAsset> _lastObservedAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property (strong, nonatomic) id<PUDisplayAsset> lastObservedAsset; // @synthesize lastObservedAsset=_lastObservedAsset;
@property (readonly) Class superclass;
@property (nonatomic) long long viewTimeSignpostID; // @synthesize viewTimeSignpostID=_viewTimeSignpostID;

- (void).cxx_destruct;
- (void)_endViewingAsset:(id)arg1;
- (void)_handleAssetUpdate:(id)arg1;
- (void)_startViewingAsset:(id)arg1;
- (void)startTracking;
- (void)stopTracking;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
