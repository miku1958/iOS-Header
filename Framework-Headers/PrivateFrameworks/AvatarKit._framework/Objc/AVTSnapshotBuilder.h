//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTAvatarEnvironment, NSString, SCNNode, SCNRenderer;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    SCNRenderer *_renderer;
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    SCNNode *_avatarNode;
    AVTAvatarEnvironment *_environment;
}

@property (strong, nonatomic) AVTAvatar *avatar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SCNRenderer *renderer;
@property (readonly) Class superclass;

+ (struct CGImage *)copyRescaledCGImage:(struct CGImage *)arg1 by:(float)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_applyOptions:(id)arg1;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(BOOL)arg4;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (struct UIImage *)animatedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage *)imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (id)init;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(BOOL)arg2;

@end
