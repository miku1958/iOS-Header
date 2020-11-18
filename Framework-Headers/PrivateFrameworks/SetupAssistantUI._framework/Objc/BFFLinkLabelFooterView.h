//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UILabel;

@interface BFFLinkLabelFooterView : UIView
{
    UILabel *_label;
    NSMutableArray *_linkHandlers;
    UIView *_topLine;
    BOOL _wantsSideBySideLayout;
    BOOL _wantsFromBottomLayout;
    double _flexibleHeight;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) double flexibleHeight; // @synthesize flexibleHeight=_flexibleHeight;
@property (strong, nonatomic) NSString *labelText;
@property (nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property (strong, nonatomic) UIColor *topLineColor;
@property (nonatomic) BOOL wantsFromBottomLayout; // @synthesize wantsFromBottomLayout=_wantsFromBottomLayout;
@property (nonatomic) BOOL wantsSideBySideLayout; // @synthesize wantsSideBySideLayout=_wantsSideBySideLayout;

+ (void)initialize;
- (void).cxx_destruct;
- (void)addLinkWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfLinks;
- (void)removeAllLinks;
- (void)removeLinkAtIndex:(unsigned long long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 shouldSetSize:(BOOL)arg2;

@end
