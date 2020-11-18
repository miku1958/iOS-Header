//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction
{
}

@property (readonly, strong, nonatomic) NSDictionary *request;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;

@end

