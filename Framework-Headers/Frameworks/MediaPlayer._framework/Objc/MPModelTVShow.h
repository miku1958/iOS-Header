//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow : MPModelObject
{
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property (copy, nonatomic) MPModelTVShowCreator *creator; // @dynamic creator;
@property (copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount; // @dynamic episodesCount;
@property (copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property (copy, nonatomic) NSString *shortTitle; // @dynamic shortTitle;
@property (copy, nonatomic) NSString *tagline; // @dynamic tagline;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__creator_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortTitle_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (id)kindWithSeasonKind:(id)arg1;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)humanDescription;

@end
