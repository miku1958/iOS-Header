//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollections.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections
{
    BOOL _encodeHighDef;
    BOOL _decodeHighDef;
}

+ (id)sharedInstance;
- (BOOL)getBestFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3 encodingType:(unsigned char)arg4 aspectRatio:(double)arg5 forPayload:(int)arg6;
- (BOOL)getBestPreviewFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (BOOL)isHiDefCapable;
- (double)preferredAspectRatio;
- (void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2;
- (BOOL)setupH264CellularRules;
- (BOOL)useSoftFramerateSwitching;

@end

