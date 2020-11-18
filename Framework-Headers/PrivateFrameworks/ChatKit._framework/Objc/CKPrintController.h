//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, NSCache;

__attribute__((visibility("hidden")))
@interface CKPrintController : NSObject
{
    BOOL _isPrinting;
    CNAvatarImageRenderer *_avatarImageRenderer;
    NSCache *_avatarCache;
}

@property (strong, nonatomic) NSCache *avatarCache; // @synthesize avatarCache=_avatarCache;
@property (strong, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // @synthesize avatarImageRenderer=_avatarImageRenderer;
@property (nonatomic, setter=setPrinting:) BOOL isPrinting; // @synthesize isPrinting=_isPrinting;

+ (id)printAttributes:(id)arg1;
+ (id)printBackgroundColor;
+ (id)printBalloonTextColor;
+ (void)printResolvedColors:(id *)arg1 balloonDescriptor:(struct CKBalloonDescriptor_t *)arg2 coloredBalloonView:(id)arg3;
+ (id)printTranscriptTextColor;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)avatarImageForContact:(id)arg1 diameter:(double)arg2;
- (void)clearAvatarCache;
- (id)init;

@end
