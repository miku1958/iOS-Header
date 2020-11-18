//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface SearchUIRowFormatter : NSObject
{
    BOOL _centerText;
    BOOL _thumbnailFillsWidth;
    BOOL _requiresTwoLineTitles;
    double _spacingBetweenTitleAndTopView;
    double _spacingBetweenTitleAndDescription;
    double _spacingBetweenDescriptions;
    double _spacingBetweenDescriptionAndFootnote;
    UIFont *_titleFont;
    UIFont *_descriptionFont;
    UIFont *_footnoteFont;
    double _interResultSpacing;
}

@property BOOL centerText; // @synthesize centerText=_centerText;
@property (strong) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property (strong) UIFont *footnoteFont; // @synthesize footnoteFont=_footnoteFont;
@property double interResultSpacing; // @synthesize interResultSpacing=_interResultSpacing;
@property BOOL requiresTwoLineTitles; // @synthesize requiresTwoLineTitles=_requiresTwoLineTitles;
@property double spacingBetweenDescriptionAndFootnote; // @synthesize spacingBetweenDescriptionAndFootnote=_spacingBetweenDescriptionAndFootnote;
@property double spacingBetweenDescriptions; // @synthesize spacingBetweenDescriptions=_spacingBetweenDescriptions;
@property double spacingBetweenTitleAndDescription; // @synthesize spacingBetweenTitleAndDescription=_spacingBetweenTitleAndDescription;
@property double spacingBetweenTitleAndTopView; // @synthesize spacingBetweenTitleAndTopView=_spacingBetweenTitleAndTopView;
@property BOOL thumbnailFillsWidth; // @synthesize thumbnailFillsWidth=_thumbnailFillsWidth;
@property (strong) UIFont *titleFont; // @synthesize titleFont=_titleFont;

- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 scrollable:(BOOL)arg3;
- (id)initWithResults:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithRowType:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end
