//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class NSString;
@protocol AXImageMonitor;

@protocol AXImageMonitorObserver <NSObject>
- (void)imageMonitor:(id<AXImageMonitor>)arg1 didAddImage:(NSString *)arg2;
- (void)iterateInitialImageListForImageMonitor:(id<AXImageMonitor>)arg1;
@end
