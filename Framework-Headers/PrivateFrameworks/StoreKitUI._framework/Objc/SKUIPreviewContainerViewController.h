//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIViewControllerPreviewing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIPreviewContainerViewController : UIViewController <SKUIViewControllerPreviewing>
{
    UIViewController *_childViewController;
}

@property (strong, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)previewCommitViewController;

@end
