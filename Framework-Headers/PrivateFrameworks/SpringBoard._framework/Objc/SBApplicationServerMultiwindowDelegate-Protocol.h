//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationServerDelegate-Protocol.h>

@class NSString, SBApplicationServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBApplicationServerMultiwindowDelegate <SBApplicationServerDelegate>
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id<FBSServiceFacilityClientHandle>)arg2 showAllWindowsForBundleIdentifier:(NSString *)arg3;
@end

