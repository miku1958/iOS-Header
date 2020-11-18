//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPDataSection.h>

#import <SpotlightUI/SearchUIKeyValueDataCardSection-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;

@interface SPDataSection (SearchUIExtensions) <SearchUIKeyValueDataCardSection>

@property (readonly, nonatomic) UIImage *accessoryImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *punchoutOptions;
@property (readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property (readonly, nonatomic) NSString *punchoutPickerLabel;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *values;

- (id)dataAlignment;
- (id)imageAlignment;
@end

