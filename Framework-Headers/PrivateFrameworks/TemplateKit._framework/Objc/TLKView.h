//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TemplateKit/TLKObservable-Protocol.h>

@class NSString, TLKObserver;

@interface TLKView : UIView <TLKObservable>
{
    unsigned long long _style;
    UIView *_containerView;
    TLKObserver *_viewObserver;
}

@property (strong) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (strong) TLKObserver *viewObserver; // @synthesize viewObserver=_viewObserver;

+ (struct UIEdgeInsets)defaultInsets;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disableUnbatchedUpdates;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)setContainer:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (BOOL)supportsAsynchronousMeasurement;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

