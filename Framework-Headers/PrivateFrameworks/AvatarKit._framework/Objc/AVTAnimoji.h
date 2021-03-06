//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTAvatar.h>

@class NSDictionary, NSString, NSURL, SCNNode;

@interface AVTAnimoji : AVTAvatar
{
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
    NSString *_name;
}

@property (readonly, nonatomic) SCNNode *cameraNode;
@property (readonly, nonatomic) SCNNode *lightingNode;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)_scenePathForPuppetNamed:(id)arg1;
+ (id)_sceneURLForPuppetDirectoryURL:(id)arg1;
+ (id)animojiNamed:(id)arg1;
+ (id)animojiNames;
+ (id)animojiWithContentsOfURL:(id)arg1;
+ (unsigned char)classIdentifier;
+ (void)preloadAnimojiNamed:(id)arg1;
+ (void)preloadPuppet:(id)arg1;
+ (void)preloadPuppetNamed:(id)arg1;
+ (id)puppetNamed:(id)arg1 options:(id)arg2;
+ (id)puppetNames;
+ (id)thumbnailForAnimojiNamed:(id)arg1 options:(id)arg2;
+ (id)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (void)_encode:(id)arg1;
- (void)_load;
- (id)_sceneURL;
- (id)avatarNode;
- (void)configureForBestAnimationQuality;
- (id)copyWithUsageIntent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)headNode;
- (id)initWithDictionaryRepresentation:(id)arg1 usageIntent:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1;
- (void)loadIfNeeded;
- (id)puppetState;
- (void)setName:(id)arg1;
- (void)setPuppetState:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)specializationSettings;
- (id)stickerPhysicsStateIdentifier;
- (void)update;
- (id)url;
- (unsigned long long)usageIntent;

@end

