//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class AVPlayer, NSString, NSURL;

@interface SKVideoNode : SKNode
{
    struct SKCVideoNode *_skcVideoNode;
    BOOL _isUsingKVO;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}

@property (strong, nonatomic) AVPlayer *_player;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) struct CGSize size;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)videoNodeWithAVPlayer:(id)arg1;
+ (id)videoNodeWithFileNamed:(id)arg1;
+ (id)videoNodeWithURL:(id)arg1;
+ (id)videoNodeWithVideoFileNamed:(id)arg1;
+ (id)videoNodeWithVideoURL:(id)arg1;
- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (void)commonInit;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAVPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithVideoFileNamed:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)setPaused:(BOOL)arg1;

@end
