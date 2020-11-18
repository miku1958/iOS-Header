//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataCloudKitMirroringHandler-Protocol.h>

@class NSNotificationCenter;
@protocol AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTUILogger, NSObject;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>
{
    BOOL _exportInFlight;
    id<AVTCoreDataCloudKitMirroringHandlerDelegate> _delegate;
    id<AVTUILogger> _logger;
    id<AVTBlockScheduler> _blockScheduler;
    id<NSObject> _willResetNotificationToken;
    id<NSObject> _didResetNotificationToken;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly, nonatomic) id<AVTBlockScheduler> blockScheduler; // @synthesize blockScheduler=_blockScheduler;
@property (weak, nonatomic) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) id<NSObject> didResetNotificationToken; // @synthesize didResetNotificationToken=_didResetNotificationToken;
@property (nonatomic) BOOL exportInFlight; // @synthesize exportInFlight=_exportInFlight;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (strong, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (strong, nonatomic) id<NSObject> willResetNotificationToken; // @synthesize willResetNotificationToken=_willResetNotificationToken;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didResetSync:(id)arg1;
- (void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithLogger:(id)arg1 blockScheduler:(id)arg2;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;
- (void)willResetSync:(id)arg1;

@end
