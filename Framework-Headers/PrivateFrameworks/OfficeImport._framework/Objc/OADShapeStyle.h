//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADFontReference, OADStyleMatrixReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <NSCopying>
{
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}

+ (id)defaultOfficeShapeStyle;
+ (id)defaultShapeStyle;
- (void).cxx_destruct;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4;
- (void)applyToParagraphProperties:(id)arg1;
- (void)applyToTextBody:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)effectReference;
- (id)fillReference;
- (id)fontReference;
- (id)lineReference;
- (void)setEffectMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setEffectReference:(id)arg1;
- (void)setFillMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setFillReference:(id)arg1;
- (void)setFontReference:(id)arg1;
- (void)setLineMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setLineReference:(id)arg1;

@end
