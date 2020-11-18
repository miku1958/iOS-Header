//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBPunchout, _SFPBTrack;

@protocol _SFPBTrackListCardSection <NSObject>

@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *tracks;
@property (copy, nonatomic) NSString *type;

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)addTracks:(_SFPBTrack *)arg1;
- (void)clearPunchoutOptions;
- (void)clearTracks;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (_SFPBTrack *)tracksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tracksCount;
@end

