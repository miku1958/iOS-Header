//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface SearchUICardSectionFormatter : NSObject
{
    BOOL _primaryTextIsVibrant;
    BOOL _secondaryTextIsVibrant;
    unsigned long long _style;
    double _imageYInset;
    double _imageXInset;
    double _primaryTextLeadingInset;
    double _secondaryTextLeadingInset;
    double _primaryTextBaselineFromBottom;
    double _primaryTextBaselineFromTop;
    double _secondaryTextBaselineFromBottom;
    double _secondaryTextBaselineFromTop;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
}

@property (nonatomic) double imageXInset; // @synthesize imageXInset=_imageXInset;
@property (nonatomic) double imageYInset; // @synthesize imageYInset=_imageYInset;
@property (strong, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property (nonatomic) double primaryTextBaselineFromBottom; // @synthesize primaryTextBaselineFromBottom=_primaryTextBaselineFromBottom;
@property (nonatomic) double primaryTextBaselineFromTop; // @synthesize primaryTextBaselineFromTop=_primaryTextBaselineFromTop;
@property (nonatomic) BOOL primaryTextIsVibrant; // @synthesize primaryTextIsVibrant=_primaryTextIsVibrant;
@property (nonatomic) double primaryTextLeadingInset; // @synthesize primaryTextLeadingInset=_primaryTextLeadingInset;
@property (strong, nonatomic) UIFont *secondaryFont; // @synthesize secondaryFont=_secondaryFont;
@property (nonatomic) double secondaryTextBaselineFromBottom; // @synthesize secondaryTextBaselineFromBottom=_secondaryTextBaselineFromBottom;
@property (nonatomic) double secondaryTextBaselineFromTop; // @synthesize secondaryTextBaselineFromTop=_secondaryTextBaselineFromTop;
@property (nonatomic) BOOL secondaryTextIsVibrant; // @synthesize secondaryTextIsVibrant=_secondaryTextIsVibrant;
@property (nonatomic) double secondaryTextLeadingInset; // @synthesize secondaryTextLeadingInset=_secondaryTextLeadingInset;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (id)initWithRowCardSection:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithRowCardSectionType:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end
