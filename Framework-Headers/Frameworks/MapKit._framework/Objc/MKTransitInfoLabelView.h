//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUILabel.h>

@class MKArtworkDataSourceCache, MKMapItem, NSArray;

@interface MKTransitInfoLabelView : _MKUILabel
{
    BOOL _hasCustomShieldSize;
    BOOL _hasCustomIconSize;
    BOOL _hasCustomFont;
    BOOL _truncateBySwitchingToTextOnly;
    BOOL _containsText;
    double _maxWidth;
    MKMapItem *_mapItem;
    long long _shieldSize;
    long long _iconSize;
    NSArray *_labelItems;
    double _spaceBetweenShields;
    double _spaceBetweenIcons;
    MKArtworkDataSourceCache *_artworkCache;
}

@property (strong, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property (readonly, nonatomic) BOOL containsText; // @synthesize containsText=_containsText;
@property (nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property (copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property (nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property (nonatomic) double spaceBetweenIcons; // @synthesize spaceBetweenIcons=_spaceBetweenIcons;
@property (nonatomic) double spaceBetweenShields; // @synthesize spaceBetweenShields=_spaceBetweenShields;
@property (nonatomic) BOOL truncateBySwitchingToTextOnly; // @synthesize truncateBySwitchingToTextOnly=_truncateBySwitchingToTextOnly;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_generateText:(BOOL)arg1 allowElipsis:(BOOL)arg2;
- (long long)_iconSizeForContentSizeCategory:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setFont:(id)arg1 custom:(BOOL)arg2;
- (void)_setupLabelInfo;
- (long long)_shieldSizeForContentSizeCategory:(id)arg1;
- (id)_stringAttributes;
- (void)dealloc;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (void)setFont:(id)arg1;

@end

