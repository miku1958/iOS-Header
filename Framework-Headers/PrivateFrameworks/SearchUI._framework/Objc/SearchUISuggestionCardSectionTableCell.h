//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionTableCell.h>

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell
{
    BOOL _sectionHasHeader;
    int _actualSectionLocation;
}

@property int actualSectionLocation; // @synthesize actualSectionLocation=_actualSectionLocation;
@property (nonatomic) BOOL sectionHasHeader; // @synthesize sectionHasHeader=_sectionHasHeader;

- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_insetsBackground;
- (BOOL)_isUsingOldStyleMultiselection;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1;
- (BOOL)_showSeparatorAtTopOfSection;
- (void)didMoveToWindow;
- (BOOL)isDark;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDrawBackgroundColor;
- (BOOL)shouldDrawFullLengthSeparatorForSectionLocation:(int)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end
