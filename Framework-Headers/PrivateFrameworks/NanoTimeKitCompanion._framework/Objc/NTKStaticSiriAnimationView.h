//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationImageView-Protocol.h>

@class CLKImageProvider, NSString, UIColor, UIImageView;

@interface NTKStaticSiriAnimationView : UIView <NTKComplicationImageView>
{
    UIImageView *_imageView;
    struct CGSize _complicationSize;
    BOOL _usesLegibility;
    UIColor *_color;
    CLKImageProvider *_imageProvider;
    UIColor *_overrideColor;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property (strong, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

