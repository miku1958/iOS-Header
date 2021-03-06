//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTableRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFTableAlignmentSchema;

@protocol SFTableHeaderRowCardSection <SFTableRowCardSection>

@property (nonatomic) BOOL alignRowsToHeader;
@property (strong, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSArray *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL isSubHeader;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) BOOL reducedRowHeight;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *tabGroupIdentifier;
@property (copy, nonatomic) NSString *tableIdentifier;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int verticalAlign;

@end

