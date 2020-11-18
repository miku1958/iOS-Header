//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CMKInflightAsset : NSObject
{
    BOOL _isVideo;
    BOOL __didPersistAvalanche;
    BOOL __hasPendingAvalanchePersistenceUpdate;
    short _visibilityState;
    int _avalanchePickType;
    NSString *_uuid;
    NSString *_directory;
    NSString *_filename;
    NSDate *_dateCreated;
    long long _deviceOrientationDuringCapture;
    long long _captureDeviceDuringCapture;
    NSString *_avalancheUUID;
}

@property (readonly, nonatomic) BOOL _didPersistAvalanche; // @synthesize _didPersistAvalanche=__didPersistAvalanche;
@property (readonly, nonatomic) BOOL _hasPendingAvalanchePersistenceUpdate; // @synthesize _hasPendingAvalanchePersistenceUpdate=__hasPendingAvalanchePersistenceUpdate;
@property (nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property (strong, nonatomic) NSString *avalancheUUID; // @synthesize avalancheUUID=_avalancheUUID;
@property (nonatomic) long long captureDeviceDuringCapture; // @synthesize captureDeviceDuringCapture=_captureDeviceDuringCapture;
@property (strong, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (nonatomic) long long deviceOrientationDuringCapture; // @synthesize deviceOrientationDuringCapture=_deviceOrientationDuringCapture;
@property (strong, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property (strong, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property (nonatomic) short visibilityState; // @synthesize visibilityState=_visibilityState;

- (void).cxx_destruct;
- (void)_avalanchePersistenceStateDidChange;
- (void)_persistAvalancheToFilesystem;
- (id)init;
- (id)mainFileURL;
- (id)pathForImageFile;
- (id)pathForOriginalFile;
- (id)pathForVideoFile;

@end
