//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPRichTitleSection.h>

#import <SpotlightUI/SearchUIRichTitleCardSection-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;

@interface SPRichTitleSection (SearchUIExtensions) <SearchUIRichTitleCardSection>

@property (readonly, nonatomic) BOOL centered;
@property (readonly, copy, nonatomic) NSString *contentRatingText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSArray *punchoutOptions;
@property (readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property (readonly, nonatomic) NSString *punchoutPickerLabel;
@property (readonly, nonatomic) BOOL shouldCropImageToCircle;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *titleImage;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSURL *url;

@end
