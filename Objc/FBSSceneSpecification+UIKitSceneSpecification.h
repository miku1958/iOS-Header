//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSpecification.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification (UIKitSceneSpecification)

@property (readonly, nonatomic) NSDictionary *baseSceneComponentClassDictionary;
@property (readonly, nonatomic) NSArray *finalActionHandlers;
@property (readonly, nonatomic) NSArray *finalSettingsDiffActions;
@property (readonly, nonatomic) NSArray *initialActionHandlers;
@property (readonly, nonatomic) NSArray *initialSettingsDiffActions;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isUIKitManaged;
@property (readonly, nonatomic) Class lifecycleMonitorClass;
@property (readonly, nonatomic) Class sceneSubstrateClass;
@property (readonly, nonatomic) Class uiSceneMinimumClass;
@property (readonly, nonatomic) NSString *uiSceneSessionRole;

- (id)connectionHandlers;
- (id)disconnectionHandlers;
@end

