//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteColorSwatch.h>

#import <PencilKit/PKPaletteMultiColorSwatchProperties-Protocol.h>

@class NSString, PKSwatchColor;

@interface PKPaletteMulticolorSwatch : PKPaletteColorSwatch <PKPaletteMultiColorSwatchProperties>
{
}

@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL showsSelectionHighlight;
@property (readonly) Class superclass;
@property (strong, nonatomic) PKSwatchColor *swatchColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)newColorBackgroundView;
- (BOOL)wantsBackgroundViewColor;
- (BOOL)wantsColorBulletVisible;

@end
