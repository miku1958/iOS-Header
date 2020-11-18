//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIPlatterContainerView : UIView
{
    UIView *_updatedTargetWrapper;
    _UIPlatterView *_source;
    _UIPlatterView *_target;
    _UIPlatterView *_updatedTarget;
}

@property (strong, nonatomic) _UIPlatterView *source; // @synthesize source=_source;
@property (strong, nonatomic) _UIPlatterView *target; // @synthesize target=_target;
@property (strong, nonatomic) _UIPlatterView *updatedTarget; // @synthesize updatedTarget=_updatedTarget;

- (void).cxx_destruct;
- (void)_updateTransforms;
- (void)applyRotation:(double)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1 withSize:(struct CGSize)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

