//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICellLayout.h>

#import <StoreKitUI/SKUIEditorialLinkViewDelegate-Protocol.h>

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>
{
    struct UIEdgeInsets _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUITextBoxView *textBoxView;

- (void).cxx_destruct;
- (void)_initContentInset;
- (id)_linkView;
- (id)_textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(BOOL)arg3;
- (void)dealloc;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (void)layoutSubviews;
- (void)resetContentInset;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;

@end

