//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject
{
    NSTimer *_coalesceTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_coalesceTimerFired:(id)arg1;
- (id)_init;
- (void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)loadAccessibilityInformation;
- (void)setNeedsLoadAccessibilityInformation;

@end

