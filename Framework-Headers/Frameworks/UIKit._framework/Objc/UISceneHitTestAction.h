//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@interface UISceneHitTestAction : BSAction
{
}

@property (readonly, nonatomic) struct CGPoint touchLocation;

- (long long)UIActionType;
- (id)initWithTouchLocation:(struct CGPoint)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)sendResponse:(id)arg1;

@end

