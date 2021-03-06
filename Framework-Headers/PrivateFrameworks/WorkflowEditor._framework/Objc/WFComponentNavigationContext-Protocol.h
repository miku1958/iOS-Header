//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class UIViewController;
@protocol WFComponentEditingSession;

@protocol WFComponentNavigationContext <NSObject>

@property (readonly, weak, nonatomic) UIViewController *componentHostingViewController;

- (void)cancelEditingSessionsWithCompletionHandler:(void (^)(void))arg1;
- (void)componentDidEndEditingSession:(id<WFComponentEditingSession>)arg1;
- (void)componentWillBeginEditingSession:(id<WFComponentEditingSession>)arg1;
@end

