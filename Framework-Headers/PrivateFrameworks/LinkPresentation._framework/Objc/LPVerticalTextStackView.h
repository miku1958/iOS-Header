//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>

@class LPVerticalTextStackViewStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable>
{
    NSMutableArray *_items;
    BOOL _hasEverBuilt;
    struct UIEdgeInsets _contentInset;
    LPVerticalTextStackViewStyle *_style;
}

- (void).cxx_destruct;
- (struct CGSize)_layoutTextStackForSize:(struct CGSize)arg1 applyingLayout:(BOOL)arg2;
- (void)addArrangedSubview:(id)arg1;
- (id)init;
- (id)initWithStyle:(id)arg1;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

