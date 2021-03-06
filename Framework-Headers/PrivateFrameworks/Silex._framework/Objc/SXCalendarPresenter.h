//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/EKEventEditViewDelegate-Protocol.h>
#import <Silex/SXCalendarPresenter-Protocol.h>

@class NSString, SXEventStoreProvider;
@protocol SXViewControllerPresenting;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter>
{
    id<SXViewControllerPresenting> _viewControllerPresenting;
    SXEventStoreProvider *_eventStoreProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXEventStoreProvider *eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;

- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2;
- (void)presentCalendarEvent:(id)arg1;

@end

