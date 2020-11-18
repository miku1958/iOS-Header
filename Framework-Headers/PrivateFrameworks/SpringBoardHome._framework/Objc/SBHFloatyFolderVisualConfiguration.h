//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _continuousCornerRadius;
    double _titleFontSizeInPortrait;
    double _titleFontSizeInLandscape;
    double _titleHorizontalInset;
    double _pageControlAreaHeight;
    double _rubberBandIntervalForOverscroll;
    struct CGSize _contentBackgroundSize;
}

@property (nonatomic) struct CGSize contentBackgroundSize; // @synthesize contentBackgroundSize=_contentBackgroundSize;
@property (nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pageControlAreaHeight; // @synthesize pageControlAreaHeight=_pageControlAreaHeight;
@property (nonatomic) double rubberBandIntervalForOverscroll; // @synthesize rubberBandIntervalForOverscroll=_rubberBandIntervalForOverscroll;
@property (readonly) Class superclass;
@property (nonatomic) double titleFontSizeInLandscape; // @synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape;
@property (nonatomic) double titleFontSizeInPortrait; // @synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait;
@property (nonatomic) double titleHorizontalInset; // @synthesize titleHorizontalInset=_titleHorizontalInset;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)setTitleFontSizeInAllOrientations:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
