//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerUICore/DOCAppearanceProtocol-Protocol.h>

@class DOCAppearance, NSArray, NSString;

@interface DOCStackedThumbnailView : UIView <DOCAppearanceProtocol>
{
    NSArray *_items;
    NSArray *_URLs;
    DOCAppearance *_appearance;
    NSArray *_thumbnailImageViews;
    struct CGSize _topThumbnailSize;
}

@property (strong, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
@property (strong, nonatomic) DOCAppearance *appearance; // @synthesize appearance=_appearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *thumbnailImageViews; // @synthesize thumbnailImageViews=_thumbnailImageViews;
@property (nonatomic) struct CGSize topThumbnailSize; // @synthesize topThumbnailSize=_topThumbnailSize;

- (void).cxx_destruct;
- (void)createThumbnailViewsWithCount:(unsigned long long)arg1 createViewForIndex:(CDUnknownBlockType)arg2;
- (id)initWithTopThumbnailSize:(struct CGSize)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updateItems;
- (void)updateURLs;

@end
