//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RelevanceEngineUI/CLKFullColorImageView-Protocol.h>

@class NSString, UIImageView;
@protocol CLKMonochromeFilterProvider;

@interface REUIScaledFullColorImageView : UIView <CLKFullColorImageView>
{
    id<CLKMonochromeFilterProvider> filterProvider;
    UIImageView *_imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)layoutSubviews;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end

