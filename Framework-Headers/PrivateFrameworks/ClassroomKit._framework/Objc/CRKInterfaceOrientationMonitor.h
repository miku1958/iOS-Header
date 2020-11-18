//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject
{
    FBSOrientationObserver *mObserver;
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
    unsigned long long _interfaceOrientation;
}

@property (nonatomic) unsigned long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;

- (void).cxx_destruct;
- (unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)interfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)makeUpdateHandler;
- (void)updateInterfaceOrientationWithBSOrientation:(long long)arg1;
- (void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1;
- (void)updateInterfaceOrientationWithNotification:(id)arg1;

@end
