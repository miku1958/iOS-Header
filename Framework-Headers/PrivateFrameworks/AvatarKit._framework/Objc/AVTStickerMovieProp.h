//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTStickerProp.h>

@class AVPlayerItem, NSMutableArray, NSURL;

@interface AVTStickerMovieProp : AVTStickerProp
{
    AVPlayerItem *_moviePlayerItem;
    NSURL *_movieURL;
    NSMutableArray *_loadingNodes;
}

@property (strong, nonatomic) NSMutableArray *loadingNodes; // @synthesize loadingNodes=_loadingNodes;
@property (strong, nonatomic) AVPlayerItem *moviePlayerItem; // @synthesize moviePlayerItem=_moviePlayerItem;
@property (readonly, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 scale:(BOOL)arg3 position:(BOOL)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;
- (void)stickerGenerationDidEnd;
- (void)stickerGenerationWillBegin;
- (void)updateNode:(id)arg1 withContentAtTime:(CDStruct_198678f7)arg2;

@end
