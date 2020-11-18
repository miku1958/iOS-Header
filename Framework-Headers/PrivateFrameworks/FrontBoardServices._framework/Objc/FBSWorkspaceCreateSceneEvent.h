//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneUpdateEvent.h>

@class FBSDisplay, FBSSceneClientSettingsDiff, FBSSceneSpecification, NSString;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent
{
    FBSSceneClientSettingsDiff *_clientSettings;
    FBSDisplay *_display;
    NSString *_specificationClassName;
}

@property (strong, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // @synthesize clientSettingsDiff=_clientSettings;
@property (strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (strong, nonatomic) FBSSceneSpecification *specification;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

