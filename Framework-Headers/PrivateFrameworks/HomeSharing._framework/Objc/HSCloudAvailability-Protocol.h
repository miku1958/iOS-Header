//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/NSObject-Protocol.h>

@protocol HSCloudAvailability <NSObject>
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
@end
