//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVModalPresentationViewControllerProviding-Protocol.h>

@class NSString, UIViewController;
@protocol SVVideoViewControllerProviding;

@interface SVModalPresentationViewControllerProvider : NSObject <SVModalPresentationViewControllerProviding>
{
    id<SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property (readonly, weak, nonatomic) UIViewController *viewControllerForModalPresentation;

- (void).cxx_destruct;
- (id)initWithVideoViewControllerProvider:(id)arg1;

@end

