//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLRequest, UIViewController;
@protocol SWNavigationHandler;

@interface SWNavigationPreview : NSObject
{
    UIViewController *_viewController;
    id<SWNavigationHandler> _navigationHandler;
    NSURLRequest *_request;
}

@property (readonly, nonatomic) id<SWNavigationHandler> navigationHandler; // @synthesize navigationHandler=_navigationHandler;
@property (readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property (readonly, weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;

@end

