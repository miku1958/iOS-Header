//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject
{
    NSString *mName;
    TSUColor *mColor;
}

@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (strong, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;

+ (id)authorCellViolatorColorForIndex:(unsigned long long)arg1;
+ (id)authorChangeAdornmentsColorForIndex:(unsigned long long)arg1;
+ (id)authorColorAppearanceNameForIndex:(unsigned long long)arg1;
+ (id)authorColorNameForIndex:(unsigned long long)arg1;
+ (id)authorFlagFillColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagPressedColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagStrokeColorForIndex:(unsigned long long)arg1;
+ (id)authorPopoverColorForIndex:(unsigned long long)arg1;
+ (id)authorStorageColorForIndex:(unsigned long long)arg1;
+ (id)authorTextHighlightColorForIndex:(unsigned long long)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)arg1;
+ (id)defaultAuthorName;
+ (unsigned long long)presetColorCount;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)p_authorColorIndex;

@end

