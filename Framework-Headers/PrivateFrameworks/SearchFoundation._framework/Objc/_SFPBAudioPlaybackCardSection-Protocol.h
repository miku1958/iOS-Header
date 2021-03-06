//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBAudioPlaybackCardSection <NSObject>

@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (strong, nonatomic) _SFPBRichText *detailText;
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
@property (strong, nonatomic) _SFPBRichText *subtitle;
@property (strong, nonatomic) _SFPBImage *thumbnail;
@property (strong, nonatomic) _SFPBRichText *title;
@property (copy, nonatomic) NSString *type;

- (void)addPlayCommands:(_SFPBAbstractCommand *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addStopCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearPlayCommands;
- (void)clearPunchoutOptions;
- (void)clearStopCommands;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBAbstractCommand *)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (_SFPBAbstractCommand *)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
@end

