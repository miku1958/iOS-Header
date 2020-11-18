//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBPunchout;

@protocol _SFPBWebCardSection <NSObject>

@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (copy, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *type;

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end

