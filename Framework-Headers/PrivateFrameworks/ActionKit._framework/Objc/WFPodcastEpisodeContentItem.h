//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFPodcastEpisodeContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;
- (id)episode;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)getArtworkDataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getArtworkURLForSize:(struct CGSize)arg1 type:(id)arg2;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)preferredFileType;

@end

