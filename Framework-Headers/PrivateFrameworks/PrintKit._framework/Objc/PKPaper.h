//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKPaper : NSObject
{
    NSString *name;
    NSString *_baseName;
    int width;
    int height;
    int leftMargin;
    int topMargin;
    int rightMargin;
    int bottomMargin;
    BOOL _isTransverse;
    NSDictionary *mediaInfo;
}

@property (readonly, nonatomic) NSString *baseName; // @dynamic baseName;
@property (nonatomic) int bottomMargin; // @synthesize bottomMargin;
@property (readonly, nonatomic) unsigned long long bottomMarginInPoints; // @dynamic bottomMarginInPoints;
@property (nonatomic) int height; // @synthesize height;
@property (readonly, nonatomic) double imageableArea; // @dynamic imageableArea;
@property (readonly, nonatomic) struct CGRect imageableAreaRect;
@property (readonly, nonatomic) BOOL isBorderless;
@property (readonly, nonatomic) BOOL isRoll; // @dynamic isRoll;
@property (readonly, nonatomic) BOOL isTransverse; // @synthesize isTransverse=_isTransverse;
@property (nonatomic) int leftMargin; // @synthesize leftMargin;
@property (readonly, strong, nonatomic) NSString *localizedName; // @dynamic localizedName;
@property (readonly, nonatomic) unsigned long long maxCutLength; // @dynamic maxCutLength;
@property (readonly, nonatomic) int maxHeight;
@property (copy, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo;
@property (readonly, strong, nonatomic) NSString *mediaType;
@property (readonly, strong, nonatomic) NSString *mediaTypeName; // @dynamic mediaTypeName;
@property (readonly, nonatomic) unsigned long long minCutLength; // @dynamic minCutLength;
@property (readonly, nonatomic) int minHeight;
@property (strong, nonatomic) NSString *name; // @synthesize name;
@property (readonly, nonatomic) struct CGSize paperSize;
@property (nonatomic) int rightMargin; // @synthesize rightMargin;
@property (nonatomic) int topMargin; // @synthesize topMargin;
@property (readonly, nonatomic) unsigned long long topMarginInPoints; // @dynamic topMarginInPoints;
@property (nonatomic) int width; // @synthesize width;

+ (id)defaultGenericPaperForLocale:(id)arg1;
+ (id)documentPapers;
+ (id)generic3_5x5Paper;
+ (id)generic4x6Paper;
+ (id)genericA4Paper;
+ (id)genericA6Paper;
+ (id)genericBorderlessWithName:(id)arg1;
+ (id)genericHagakiPaper;
+ (id)genericLegalPaper;
+ (id)genericLetterPaper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)arg1;
+ (id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5;
+ (id)paperWithAttributes:(id)arg1;
+ (id)photoPapers;
+ (id)rollPaperWithAttributes:(id)arg1;
+ (BOOL)useMetric;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;
- (void)addToMediaCol:(struct _ipp_s *)arg1;
- (struct _ipp_s *)createMediaColAndDoMargins:(BOOL)arg1;
- (id)cutToLength:(double)arg1;
- (id)cutToPWGLength:(int)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPWGSize:(struct pwg_size_s *)arg1 localizedName:(id)arg2 codeName:(id)arg3;
- (id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualSize:(id)arg1;
- (BOOL)isEqualSizeAndMediaType:(id)arg1;
- (id)localizedNameFromDimensions;
- (id)nameWithoutSuffixes:(id)arg1;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)arg1;
- (long long)sizeAndImageableCompare:(id)arg1;
- (long long)sizeMediaTypeAndImageableCompare:(id)arg1;

@end

