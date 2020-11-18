//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneClientSettings, FBSSceneSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters
{
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (copy, nonatomic) FBSSceneClientSettings *clientSettings; // @dynamic clientSettings;
@property (copy, nonatomic) FBSSceneSettings *settings; // @dynamic settings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setDisplay:(id)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;

@end
