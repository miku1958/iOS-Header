//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BFFStyle : NSObject
{
}

+ (id)sharedStyle;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToLabel:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (id)backgroundColor;
- (double)baselineInsetForHeaderTitle;
- (struct UIEdgeInsets)edgeInsetsForHeaderView:(id)arg1;
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;
- (double)headerIconBaselineOffset;
- (double)headerIconBaselineOffsetForView:(id)arg1;
- (double)headerSubheaderBaselineSpacingForView:(id)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(BOOL)arg2;
- (double)headerTitleBaselineOffsetHasIcon:(BOOL)arg1;
- (id)headerTitleFont;
- (double)horizontalMarginForView:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)screenHeaderFooterSideInsetForView:(id)arg1;
- (double)screenHeaderHeightForView:(id)arg1;
- (double)singleLineCellHeightForTable:(id)arg1;
- (id)tableCellFont;

@end

