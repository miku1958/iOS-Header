//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSSet, NSString, PXCuratedLibraryActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, UIColor, UIImage;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData>
{
    BOOL _isSystemSymbolIcon;
    UIColor *_contentColor;
    UIColor *_highlightedContentColor;
    UIImage *_iconImage;
    UIImage *_tintedIconImage;
    UIImage *_highlightedIconImage;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    PXCuratedLibraryActionPerformer *_actionPerformer;
    CDUnknownBlockType _actionHandler;
    long long _style;
    long long _segment;
    NSString *_iconImageName;
    NSString *_title;
    NSSet *_possibleTitles;
    NSString *_caption;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _hitTestOutsets;
}

@property (copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property (strong, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property (copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (readonly, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIColor *highlightedContentColor; // @synthesize highlightedContentColor=_highlightedContentColor;
@property (readonly, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property (nonatomic) struct UIEdgeInsets hitTestOutsets; // @synthesize hitTestOutsets=_hitTestOutsets;
@property (readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (readonly, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property (nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property (nonatomic) BOOL isSystemSymbolIcon; // @synthesize isSystemSymbolIcon=_isSystemSymbolIcon;
@property (copy, nonatomic) NSSet *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property (nonatomic) long long segment; // @synthesize segment=_segment;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *tintedIconImage; // @synthesize tintedIconImage=_tintedIconImage;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)configurationWithIconImageName:(id)arg1 spec:(id)arg2;
+ (id)configurationWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
+ (id)configurationWithTitle:(id)arg1 spec:(id)arg2;
+ (id)tintedImageCache;
- (void).cxx_destruct;
- (id)_contentColorWhenHighlighted:(BOOL)arg1;
- (id)_tintedImage:(id)arg1 name:(id)arg2 withColor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)prepareForRender;

@end
