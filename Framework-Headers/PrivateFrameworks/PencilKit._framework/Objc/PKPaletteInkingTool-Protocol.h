//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteTool-Protocol.h>

@class PKInk, UIColor;

@protocol PKPaletteInkingTool <PKPaletteTool>

@property (readonly, nonatomic) PKInk *ink;

- (void)setInkColor:(UIColor *)arg1;
- (void)setInkWeight:(double)arg1;
@end

