//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext
{
    struct __CFDictionary *_cachedRatingImages;
    CDStruct_f2932e27 _stringSizeCacheKeyCallBacks;
    struct __CFDictionary *_stringSizes;
}

@property (nonatomic) CDStruct_f2932e27 stringSizeCacheKeyCallBacks; // @synthesize stringSizeCacheKeyCallBacks=_stringSizeCacheKeyCallBacks;

- (void)dealloc;
- (id)init;
- (id)ratingImageForRating:(float)arg1 style:(long long)arg2;
- (void)resetLayoutCaches;
- (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3;

@end

