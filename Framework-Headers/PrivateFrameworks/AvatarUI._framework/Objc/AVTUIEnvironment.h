//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTCoreEnvironment, AVTCoreModel, AVTDeviceResourceManager, NSNotificationCenter, NSURL, NSUserDefaults;
@protocol AVTImageCache, AVTUILogger, AVTUsageTrackingSession, OS_dispatch_queue;

@interface AVTUIEnvironment : NSObject
{
    unsigned long long _platform;
    AVTCoreModel *_editorCoreModel;
    AVTAvatarConfigurationImageRenderer *_renderer;
    id<AVTImageCache> _inMemoryImageCache;
    id<AVTUsageTrackingSession> _usageTrackingSession;
    BOOL _deviceIsPad;
    BOOL _deviceIsMac;
    AVTCoreEnvironment *_coreEnvironment;
    double _mainScreenScale;
    long long _userInterfaceLayoutDirection;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_backgroundRenderingQueue;
    NSObject<OS_dispatch_queue> *_backgroundEncodingQueue;
    AVTDeviceResourceManager *_deviceResourceManager;
    double _actionAnimationsMultiplier;
    struct CGSize _mainScreenSize;
}

@property (nonatomic) double actionAnimationsMultiplier; // @synthesize actionAnimationsMultiplier=_actionAnimationsMultiplier;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundEncodingQueue; // @synthesize backgroundEncodingQueue=_backgroundEncodingQueue;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundRenderingQueue; // @synthesize backgroundRenderingQueue=_backgroundRenderingQueue;
@property (readonly, nonatomic) AVTCoreEnvironment *coreEnvironment; // @synthesize coreEnvironment=_coreEnvironment;
@property (readonly, nonatomic) BOOL deviceIsMac; // @synthesize deviceIsMac=_deviceIsMac;
@property (readonly, nonatomic) BOOL deviceIsPad; // @synthesize deviceIsPad=_deviceIsPad;
@property (readonly, nonatomic) AVTDeviceResourceManager *deviceResourceManager; // @synthesize deviceResourceManager=_deviceResourceManager;
@property (readonly, nonatomic) AVTCoreModel *editorCoreModel;
@property (readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property (readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property (readonly, nonatomic) id<AVTImageCache> inMemoryImageCache;
@property (readonly, copy, nonatomic) CDUnknownBlockType lockProvider;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) double mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property (readonly, nonatomic) struct CGSize mainScreenSize; // @synthesize mainScreenSize=_mainScreenSize;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer;
@property (readonly, copy, nonatomic) CDUnknownBlockType serialQueueProvider;
@property (readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) id<AVTUsageTrackingSession> usageTrackingSession;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection; // @synthesize userInterfaceLayoutDirection=_userInterfaceLayoutDirection;

+ (id)createEditorCoreModelForPlatform:(unsigned long long)arg1 withLogger:(id)arg2;
+ (id)createFunCamEnvironment;
+ (id)createQueueWithQoSClass:(unsigned int)arg1 label:(const char *)arg2;
+ (id)createUsageTrackingSessionWithCoreModel:(id)arg1 serialQueueProvider:(CDUnknownBlockType)arg2 logger:(id)arg3;
+ (id)defaultEnvironment;
- (void).cxx_destruct;
- (void)flushResourcesForEnteringBackground;
- (id)initWithCoreEnvironment:(id)arg1;
- (id)initWithCoreEnvironment:(id)arg1 platform:(unsigned long long)arg2;

@end
