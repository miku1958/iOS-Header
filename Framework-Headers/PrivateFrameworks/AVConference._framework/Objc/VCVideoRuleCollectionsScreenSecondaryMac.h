//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary
{
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (BOOL)setupH264Rules;
- (BOOL)setupRules;
- (unsigned int)tilesPerFrame:(int)arg1;

@end
