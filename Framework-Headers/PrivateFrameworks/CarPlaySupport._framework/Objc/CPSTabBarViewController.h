//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <CarPlaySupport/CPSBaseTemplateViewController-Protocol.h>
#import <CarPlaySupport/CPSTemplateEnvironmentDelegate-Protocol.h>
#import <CarPlaySupport/CPTabBarTemplateProviding-Protocol.h>
#import <CarPlaySupport/UITabBarControllerDelegate-Protocol.h>

@class CPSTemplateEnvironment, CPTemplate, NAFuture, NSArray, NSString;
@protocol CPTemplateDelegate;

@interface CPSTabBarViewController : UITabBarController <UITabBarControllerDelegate, CPSTemplateEnvironmentDelegate, CPSBaseTemplateViewController, CPTabBarTemplateProviding>
{
    NAFuture *_templateProviderFuture;
    CPTemplate *_associatedTemplate;
    id<CPTemplateDelegate> _templateDelegate;
    CPSTemplateEnvironment *_templateEnvironment;
}

@property (strong, nonatomic) CPTemplate *associatedTemplate; // @synthesize associatedTemplate=_associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tabBarButtons;
@property (strong, nonatomic) id<CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property (weak, nonatomic) CPSTemplateEnvironment *templateEnvironment; // @synthesize templateEnvironment=_templateEnvironment;
@property (readonly, nonatomic) NAFuture *templateProviderFuture; // @synthesize templateProviderFuture=_templateProviderFuture;

- (void).cxx_destruct;
- (void)_nowPlayingButtonTapped;
- (void)applicationDidBecomeNowPlayingApp:(BOOL)arg1;
- (id)initWithTabBarTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (void)invalidate;
- (BOOL)restoresFocusAfterTransition;
- (void)showNowPlayingButton:(BOOL)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)tabBarTemplate;
- (id)tabBarTemplateDelegate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

