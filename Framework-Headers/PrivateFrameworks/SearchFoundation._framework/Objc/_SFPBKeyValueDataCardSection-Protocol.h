//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBKeyValueTuple, _SFPBPunchout;

@protocol _SFPBKeyValueDataCardSection <NSObject>

@property (strong, nonatomic) _SFPBImage *accessoryImage;
@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSArray *datas;
@property (readonly, nonatomic) BOOL hasAccessoryImage;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *type;

- (void)addData:(_SFPBKeyValueTuple *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearData;
- (void)clearPunchoutOptions;
- (_SFPBKeyValueTuple *)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end

