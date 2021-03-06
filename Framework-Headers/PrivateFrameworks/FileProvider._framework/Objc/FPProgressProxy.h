//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSObservation, NSURL;

@interface FPProgressProxy : NSProgress
{
    id _subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    BOOL _didSetupParentProgress;
    BOOL _updateFileCount;
}

@property (nonatomic) BOOL updateFileCount; // @synthesize updateFileCount=_updateFileCount;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateWithProgress:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setProgressDidSetupHandler:(CDUnknownBlockType)arg1;
- (void)startTrackingFileURL:(id)arg1 kind:(id)arg2;
- (void)stopTrackingIfStarted;

@end

