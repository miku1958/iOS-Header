//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSSceneClientSettingsDiff, NSString;

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent
{
    NSString *_identifier;
    FBSSceneClientSettingsDiff *_clientSettings;
}

@property (strong, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettings;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
