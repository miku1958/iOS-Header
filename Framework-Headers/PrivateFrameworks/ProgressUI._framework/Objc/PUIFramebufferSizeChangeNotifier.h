//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProgressUI/FBSDisplayObserving-Protocol.h>

@class FBSDisplayMonitor, NSMutableArray, NSString;

@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving>
{
    NSMutableArray *_listeners;
    FBSDisplayMonitor *_displayMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_onMainQueue_notifyListeners;
- (id)addListener:(CDUnknownBlockType)arg1;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)removeListener:(id)arg1;

@end
