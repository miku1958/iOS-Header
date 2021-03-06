//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppDocumentServiceViewController.h>

@class UIVisualEffectView, VUIInAppMessagingMessageTargetHandler, _TVStackTemplateController;

__attribute__((visibility("hidden")))
@interface VUICanvasAppDocumentServiceViewController : VUIAppDocumentServiceViewController
{
    VUIInAppMessagingMessageTargetHandler *_iamMessageTarget;
    BOOL _iamBannerEnabled;
    BOOL _navBarHidden;
    _TVStackTemplateController *_stackTemplate;
    UIVisualEffectView *_statusBarGradientView;
}

@property (weak, nonatomic) _TVStackTemplateController *stackTemplate; // @synthesize stackTemplate=_stackTemplate;
@property (strong, nonatomic) UIVisualEffectView *statusBarGradientView; // @synthesize statusBarGradientView=_statusBarGradientView;

- (void).cxx_destruct;
- (void)_updateNavigationBarWithDocument:(id)arg1;
- (void)dealloc;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (void)didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

