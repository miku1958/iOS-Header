//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAPackage, CAStateController, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface SBUICAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CAPackage *_package;
    CALayer *_rootLayer;
    struct CGSize _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    CDUnknownBlockType _pendingCompletion;
}

@property (weak, nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;

- (void).cxx_destruct;
- (void)_clearPendingCompletion;
- (void)_setPendingCompletion:(CDUnknownBlockType)arg1 fromState:(id)arg2 toState:(id)arg3;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;
- (void)layoutSubviews;
- (BOOL)setState:(id)arg1;
- (BOOL)setState:(id)arg1 animated:(BOOL)arg2;
- (BOOL)setState:(id)arg1 animated:(BOOL)arg2 transitionSpeed:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3;

@end

