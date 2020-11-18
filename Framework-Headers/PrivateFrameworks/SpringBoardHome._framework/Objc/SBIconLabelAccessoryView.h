//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/SBIconLabelAccessoryView-Protocol.h>

@class NSString, UIImage;

@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView>
{
    UIImage *_baseImage;
}

@property (readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (strong, nonatomic) UIImage *baseImage; // @synthesize baseImage=_baseImage;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)labelAccessorySystemImageName;
+ (long long)labelAccessorySystemImageScale;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;

@end
