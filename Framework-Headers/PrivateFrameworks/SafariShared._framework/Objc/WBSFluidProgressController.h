//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

@interface WBSFluidProgressController : NSObject
{
    id<WBSFluidProgressControllerDelegate> _delegate;
    id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;
}

@property (weak) id<WBSFluidProgressControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;

- (void).cxx_destruct;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)animationStepCompleted:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;
- (void)frontmostTabDidChange;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;

@end

