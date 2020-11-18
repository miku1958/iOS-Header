//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityValueProviding-Protocol.h>

@class MusicProductDescription, NSMutableDictionary, NSString, UIImage;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    NSMutableDictionary *_properties;
    UIImage *_artworkImage;
}

@property (strong, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) MusicProductDescription *productDescription;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)init;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end

