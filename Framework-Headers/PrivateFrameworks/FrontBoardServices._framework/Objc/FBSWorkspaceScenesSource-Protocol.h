//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSScene, NSObject, NSSet, NSString;
@protocol NSCopying;

@protocol FBSWorkspaceScenesSource <NSObject>

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

- (FBSScene *)sceneWithIdentifier:(NSString *)arg1;
- (NSSet *)scenes;
@end

