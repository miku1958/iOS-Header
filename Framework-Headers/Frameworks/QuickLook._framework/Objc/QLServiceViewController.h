//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface QLServiceViewController : UIViewController
{
    BOOL _isAccessoryView;
    UIViewController *_mainViewController;
    NSUUID *_uuid;
}

@property (readonly, weak) UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property (readonly) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;
- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)init;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

