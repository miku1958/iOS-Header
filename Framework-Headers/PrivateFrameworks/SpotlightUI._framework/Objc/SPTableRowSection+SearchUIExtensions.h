//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPTableRowSection.h>

#import <SpotlightUI/SearchUITableRowCardSection-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol SearchUITableAlignmentSchema;

@interface SPTableRowSection (SearchUIExtensions) <SearchUITableRowCardSection>

@property (readonly, nonatomic) id<SearchUITableAlignmentSchema> alignmentSchema;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideDivider;
@property (readonly, nonatomic) NSArray *punchoutOptions;
@property (readonly, nonatomic) NSString *punchoutPickerDismissLabel;
@property (readonly, nonatomic) NSString *punchoutPickerLabel;
@property (readonly, nonatomic) unsigned long long rowType;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tableID;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *values;

- (id)tabGroupID;
@end
