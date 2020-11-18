//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding>
{
    UIView *_shadowView;
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;
    BOOL _usesInnerShadow;
    BOOL _usesRoundedCorners;
    id<UILayoutContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id<UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property (nonatomic) BOOL usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;

- (void).cxx_destruct;
- (void)_installShadowViews;
- (void)_setFlagsFromDelegate:(id)arg1;
- (void)_tearDownShadowViews;
- (void)_updateShadowViews;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

