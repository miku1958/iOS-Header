//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBHRecentsDocumentExtensionProviderDelegate-Protocol.h>
#import <SpringBoardHome/WGWidgetViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSString;

@interface SBHIconViewContextMenuWrapperViewController : UIViewController <WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate>
{
    MTMaterialView *_backgroundView;
    NSArray *_layoutConstraints;
    UIViewController *_contentViewController;
    NSString *_groupNameBase;
    double _backgroundScale;
    double _continuousCornerRadius;
}

@property (nonatomic) double backgroundScale; // @synthesize backgroundScale=_backgroundScale;
@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupNameBase; // @synthesize groupNameBase=_groupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContinuousCornerRadius;
- (void)_applyPreferredContentSizeChange:(struct CGSize)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg1;
- (void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

