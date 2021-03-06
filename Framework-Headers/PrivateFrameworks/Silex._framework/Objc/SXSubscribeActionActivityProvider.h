//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXActionManager, SXSubscribeActionHandler, SXViewControllerPresenting;

@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id<SXSubscribeActionHandler> _handler;
    id<SXViewControllerPresenting> _viewControllerPresenting;
    id<SXActionManager> _actionManager;
}

@property (readonly, weak, nonatomic) id<SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXSubscribeActionHandler> handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3;

@end

