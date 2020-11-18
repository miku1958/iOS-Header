//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresentationController : UIPresentationController
{
    UIView *_extrasMenuBarView;
    struct CGRect _extrasMenuBarFrame;
}

@property (nonatomic) struct CGRect extrasMenuBarFrame; // @synthesize extrasMenuBarFrame=_extrasMenuBarFrame;
@property (strong, nonatomic) UIView *extrasMenuBarView; // @synthesize extrasMenuBarView=_extrasMenuBarView;

- (void).cxx_destruct;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(struct CGRect)arg4;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;

@end
