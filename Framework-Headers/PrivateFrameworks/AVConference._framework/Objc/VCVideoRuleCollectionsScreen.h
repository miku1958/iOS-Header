//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollections.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections
{
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (id)initForMacDecodingOnly;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;
- (BOOL)setupH264Rules;
- (BOOL)setupMacDecodingOnlyRules;

@end

