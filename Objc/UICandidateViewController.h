//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIPredictiveViewController-Protocol.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController <UIPredictiveViewController>
{
    UIView *_candidateView;
}

@property (strong, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)hidesExpandableButton;
- (BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end

