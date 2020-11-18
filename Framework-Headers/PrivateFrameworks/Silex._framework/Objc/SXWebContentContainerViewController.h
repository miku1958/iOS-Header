//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SXWebContentViewController;
@protocol SXWebContentConfigurationManager, SXWebContentErrorProvider, SXWebContentInteractionProvider, SXWebContentPresentationManager;

@interface SXWebContentContainerViewController : UIViewController
{
    id<SXWebContentInteractionProvider> _interactionProvider;
    id<SXWebContentErrorProvider> _errorProvider;
    id<SXWebContentConfigurationManager> _configurationManager;
    id<SXWebContentPresentationManager> _presentationManager;
    SXWebContentViewController *_webContentViewController;
}

@property (readonly, nonatomic) id<SXWebContentConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property (readonly, nonatomic) id<SXWebContentErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property (readonly, nonatomic) id<SXWebContentInteractionProvider> interactionProvider; // @synthesize interactionProvider=_interactionProvider;
@property (readonly, nonatomic) id<SXWebContentPresentationManager> presentationManager; // @synthesize presentationManager=_presentationManager;
@property (readonly, nonatomic) SXWebContentViewController *webContentViewController; // @synthesize webContentViewController=_webContentViewController;

- (void).cxx_destruct;
- (BOOL)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5;
- (void)loadURL:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

