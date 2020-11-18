//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXDataTableElementStyle.h>

@class NSArray, NSString, SXDataTableBorderSides, SXJSONArray, SXPadding, UIColor;

@interface SXDataTableCellStyle : SXDataTableElementStyle
{
}

@property (readonly, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property (readonly, nonatomic) SXDataTableBorderSides *border; // @dynamic border;
@property (readonly, nonatomic) SXJSONArray *conditional; // @dynamic conditional;
@property (readonly, nonatomic) struct _SXConvertibleValue height; // @dynamic height;
@property (readonly, nonatomic) unsigned long long horizontalAlignment; // @dynamic horizontalAlignment;
@property (readonly, nonatomic) struct _SXConvertibleValue minimumWidth; // @dynamic minimumWidth;
@property (readonly, nonatomic) SXPadding *padding; // @dynamic padding;
@property (readonly, nonatomic) SXJSONArray *selectors; // @dynamic selectors;
@property (readonly, nonatomic) NSString *textStyle; // @dynamic textStyle;
@property (readonly, nonatomic) NSArray *textStyles; // @dynamic textStyles;
@property (readonly, nonatomic) unsigned long long verticalAlignment; // @dynamic verticalAlignment;
@property (readonly, nonatomic) double width; // @dynamic width;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
- (unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (id)paddingWithValue:(id)arg1 withType:(int)arg2;
- (id)textStylesWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end

