//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITargetedPreview, _UIClickPresentation;

@protocol _UIClickPresentationAssisting <NSObject>

@property (copy, nonatomic) CDUnknownBlockType lifecycleCompletion;
@property (strong, nonatomic) _UIClickPresentation *presentation;

- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(void (^)(void))arg2 completion:(void (^)(void))arg3;
- (id)initWithClickPresentation:(_UIClickPresentation *)arg1;
- (void)presentFromSourcePreview:(UITargetedPreview *)arg1 lifecycleCompletion:(void (^)(BOOL))arg2;
@end

