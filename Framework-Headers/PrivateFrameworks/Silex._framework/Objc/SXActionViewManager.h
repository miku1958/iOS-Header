//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionViewManager-Protocol.h>

@class NSString;
@protocol SXViewControllerPresenting;

@interface SXActionViewManager : NSObject <SXActionViewManager>
{
    id<SXViewControllerPresenting> _viewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenter; // @synthesize viewControllerPresenter=_viewControllerPresenter;

- (void).cxx_destruct;
- (id)initWithViewControllerPresenting:(id)arg1;
- (void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;

@end

