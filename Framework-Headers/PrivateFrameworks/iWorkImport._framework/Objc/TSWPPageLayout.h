//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TSWPLayout;
@protocol TSWPHeaderFooterProvider;

__attribute__((visibility("hidden")))
@interface TSWPPageLayout : TSDLayout
{
    TSWPLayout *_headerFooterLayouts[2][3];
    struct CGRect _headerFooterClipRects[2][3];
    struct CGRect _headerFooterBorderRects[2][3];
}

@property (readonly, nonatomic) BOOL allowsHeaderFooter;
@property (readonly, nonatomic) struct CGRect bodyRect;
@property (readonly, nonatomic) double footerHeight;
@property (readonly, nonatomic) BOOL hasFooters;
@property (readonly, nonatomic) BOOL hasHeaders;
@property (readonly, nonatomic) id<TSWPHeaderFooterProvider> headerFooterProvider;
@property (readonly, nonatomic) BOOL headerFooterProviderValid;
@property (readonly, nonatomic) double headerHeight;

- (void).cxx_destruct;
- (struct CGRect)borderRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2;
- (struct CGRect)clipRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2;
- (id)headerFooterLayout:(long long)arg1 atIndex:(long long)arg2;
- (void)i_clearHeaderFooterLayouts;
- (id)i_insertValidatedHeaderFooterLayouts;
- (BOOL)i_updateHeaderFooterLayouts;
- (BOOL)isHeaderFooterLayout:(id)arg1;
- (BOOL)p_isHeaderFooter:(long long)arg1 editingAtFragmentIndex:(long long)arg2;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(long long)arg1;
- (void)parentWillChangeTo:(id)arg1;
- (BOOL)shouldHeaderFooterBeVisible:(long long)arg1;

@end

