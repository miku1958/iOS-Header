//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSURL;

@interface UIOpenURLAction : BSAction
{
}

@property (readonly, copy, nonatomic) NSURL *url;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end

