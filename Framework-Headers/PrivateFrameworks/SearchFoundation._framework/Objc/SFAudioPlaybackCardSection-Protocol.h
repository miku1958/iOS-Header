//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFImage, SFRichText;

@protocol SFAudioPlaybackCardSection <SFCardSection>

@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (strong, nonatomic) SFRichText *detailText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *playCommands;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int state;
@property (copy, nonatomic) NSArray *stopCommands;
@property (strong, nonatomic) SFRichText *subtitle;
@property (strong, nonatomic) SFImage *thumbnail;
@property (strong, nonatomic) SFRichText *title;
@property (copy, nonatomic) NSString *type;

@end

