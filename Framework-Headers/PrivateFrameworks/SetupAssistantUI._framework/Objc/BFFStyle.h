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
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (id)backgroundColor;
- (double)baselineInsetForHeaderTitle;
- (struct UIEdgeInsets)edgeInsetsForHeader;
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;
- (id)headerTitleFont;
- (double)nonTableHorizontalMargin;
- (double)singleLineCellHeightForTable:(id)arg1;
- (id)tableCellFont;

@end

