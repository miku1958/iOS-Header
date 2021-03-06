//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController
{
    unsigned long long _templateType;
}

@property (nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;

+ (struct CGSize)preferredContentSize;
- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (void)_presentationStyleValidationCheck;
- (double)autoScrollEdgeTransitionDistance;
- (struct NSDirectionalEdgeInsets)directionalLayoutMargins;
- (struct NSDirectionalEdgeInsets)insetsForTemplateType:(unsigned long long)arg1;
- (void)loadView;
- (long long)navigationBarScrollToEdgeBehavior;
- (id)navigationItem;
- (struct CGSize)preferredContentSize;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

