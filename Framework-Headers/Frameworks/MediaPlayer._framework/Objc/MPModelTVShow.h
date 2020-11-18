//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow : MPModelObject
{
    NSString *_title;
    NSString *_shortTitle;
    NSString *_editorNotes;
    NSString *_shortEditorNotes;
    NSString *_tagline;
    long long _episodesCount;
    MPModelTVShowCreator *_creator;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (copy, nonatomic) MPModelTVShowCreator *creator; // @synthesize creator=_creator;
@property (copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount; // @synthesize episodesCount=_episodesCount;
@property (copy, nonatomic) NSString *shortEditorNotes; // @synthesize shortEditorNotes=_shortEditorNotes;
@property (copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property (copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)__MPModelPropertyTVShowArtwork__PROPERTY;
+ (id)__MPModelPropertyTVShowEditorNotes__PROPERTY;
+ (id)__MPModelPropertyTVShowEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyTVShowEpisodeCount__PROPERTY;
+ (id)__MPModelPropertyTVShowShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyTVShowShortTitle__PROPERTY;
+ (id)__MPModelPropertyTVShowTagline__PROPERTY;
+ (id)__MPModelPropertyTVShowTitle__PROPERTY;
+ (id)__MPModelRelationshipTVShowCreator__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__creator__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__episodesCount__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__shortTitle__KEY;
+ (id)__tagline__KEY;
+ (id)__title__KEY;
+ (id)kindWithSeasonKind:(id)arg1;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end

