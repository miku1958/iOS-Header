//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTilingLayoutInvalidationContext.h>

@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext
{
    BOOL _invalidatedContentGuideInsets;
    BOOL _invalidatedCommentsTile;
    BOOL _invalidatedAccessoryTile;
    BOOL _invalidatedContentOffset;
    BOOL _invalidatedVideoPlaceholderTile;
    unsigned long long _options;
}

@property (nonatomic, setter=_setInvalidatedAccessoryTile:) BOOL invalidatedAccessoryTile; // @synthesize invalidatedAccessoryTile=_invalidatedAccessoryTile;
@property (readonly, nonatomic) BOOL invalidatedCommentsTile; // @synthesize invalidatedCommentsTile=_invalidatedCommentsTile;
@property (nonatomic, setter=_setInvalidatedContentGuideInsets:) BOOL invalidatedContentGuideInsets; // @synthesize invalidatedContentGuideInsets=_invalidatedContentGuideInsets;
@property (nonatomic, setter=_setInvalidatedContentOffset:) BOOL invalidatedContentOffset; // @synthesize invalidatedContentOffset=_invalidatedContentOffset;
@property (nonatomic, setter=_setInvalidatedVideoPlaceholderTile:) BOOL invalidatedVideoPlaceholderTile; // @synthesize invalidatedVideoPlaceholderTile=_invalidatedVideoPlaceholderTile;
@property (nonatomic, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;


@end

