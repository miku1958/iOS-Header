//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UISceneProposalAction : BSAction
{
}

@property (readonly, copy, nonatomic) BSAction *action;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

- (long long)UIActionType;
- (id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
