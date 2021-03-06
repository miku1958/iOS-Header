//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OABPropertiesManager-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABDefaultsManager : NSObject <OABPropertiesManager>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)fillAngle;
- (int)fillBgAlpha;
- (struct EshColor)fillBgColor;
- (struct EshBlip *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (int)fillFgAlpha;
- (struct EshColor)fillFgColor;
- (int)fillFocus;
- (int)fillFocusBottom;
- (int)fillFocusLeft;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
- (BOOL)hidden;
- (BOOL)isFillOK;
- (BOOL)isFilled;
- (BOOL)isShadowOK;
- (BOOL)isShadowed;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (BOOL)isTextPath;
- (int)shadowAlpha;
- (struct EshColor)shadowColor;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)shadowSoftness;
- (int)shadowType;
- (struct EshColor)strokeBgColor;
- (int)strokeCapStyle;
- (int)strokeCompoundType;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeFgAlpha;
- (struct EshColor)strokeFgColor;
- (struct EshBlip *)strokeFillBlipDataReference;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokeFillType;
- (int)strokeJoinStyle;
- (int)strokeMiterLimit;
- (int)strokePresetDash;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeWidth;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (int)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end

