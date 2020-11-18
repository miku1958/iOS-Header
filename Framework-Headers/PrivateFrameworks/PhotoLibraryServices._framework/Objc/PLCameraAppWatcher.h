//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class NSString, PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>
{
    BOOL _isCameraRunning;
    PLForegroundMonitor *_foregroundMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLForegroundMonitor *foregroundMonitor; // @synthesize foregroundMonitor=_foregroundMonitor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCameraRunning; // @synthesize isCameraRunning=_isCameraRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (id)init;

@end
