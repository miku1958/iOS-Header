//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFShareExtensionAction.h>

@class NSString;

@interface WFSocialAction : WFShareExtensionAction
{
}

@property (readonly, nonatomic) NSString *postPrefix;

+ (id)userInterfaceProtocol;
- (void)convertAnimatedImagesToVideoWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)convertsAnimatedImagesToVideo;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithoutUserInterfaceWithInput:(id)arg1;

@end

