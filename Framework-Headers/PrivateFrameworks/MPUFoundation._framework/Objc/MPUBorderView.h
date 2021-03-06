//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView
{
    BOOL _hidesWhenFullyTransparent;
    MPUBorderConfiguration *_borderConfiguration;
}

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // @synthesize borderConfiguration=_borderConfiguration;
@property (nonatomic) BOOL hidesWhenFullyTransparent; // @synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent;
@property (readonly, nonatomic) double requiredOutsetForDropShadow;
@property (readonly, nonatomic) struct UIEdgeInsets resizableImageCapInsets;

+ (double)requiredOutsetForDropShadow;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

