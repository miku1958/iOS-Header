//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@class WFShazamMedia;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) WFShazamMedia *media;

+ (BOOL)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;
- (id)appleMusicID;
- (id)appleMusicURL;
- (id)artist;
- (id)artworkURL;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getArtworkDataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)isExplicit;
- (id)lyricsSnippet;
- (id)lyricsSnippetSynced;
- (id)preferredFileType;
- (id)shazamURL;
- (id)title;
- (id)videoURL;

@end

