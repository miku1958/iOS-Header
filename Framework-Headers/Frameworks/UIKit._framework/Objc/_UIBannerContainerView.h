//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView
{
    NSMutableArray *_banners;
    NSMutableArray *_constraints;
}

@property (strong, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
@property (strong, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;

- (void).cxx_destruct;
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setBanner:(id)arg1 visible:(BOOL)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)updateConstraints;

@end
