//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPBannerDelegate-Protocol.h>

@class NSString, NSUUID;

@protocol CPTemplateServiceClientInterface <CPBannerDelegate>
- (void)clientExceededAudioMetadataThrottleLimit;
- (void)clientExceededHierarchyDepthLimit;
- (void)clientExceededTabBarTabLimit;
- (void)clientPushNowPlayingTemplateAnimated:(BOOL)arg1;
- (void)clientPushedIllegalTemplateOfClass:(NSString *)arg1;
- (void)templateIdentifierDidDismiss:(NSUUID *)arg1;
- (void)templateIdentifierDidPop:(NSUUID *)arg1;
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
@end

