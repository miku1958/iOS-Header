//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPRowSection.h>

#import <SpotlightUI/SearchUIRowCardSection-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;

@interface SPRowSection (SearchUIExtensions) <SearchUIRowCardSection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) double imageCornerRadius;
@property (readonly, nonatomic) BOOL imageIsRightAligned;
@property (readonly, copy, nonatomic) NSString *leftText;
@property (readonly, nonatomic) NSArray *punchoutOptions;
@property (readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property (readonly, nonatomic) NSString *punchoutPickerLabel;
@property (readonly, copy, nonatomic) NSString *rightText;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSURL *url;

@end

