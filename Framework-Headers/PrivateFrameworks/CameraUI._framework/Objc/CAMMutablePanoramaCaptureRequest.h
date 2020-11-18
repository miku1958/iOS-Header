//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPanoramaCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>
{
}

@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) long long captureDevice; // @dynamic captureDevice;
@property (nonatomic) long long captureMode; // @dynamic captureMode;
@property (nonatomic) long long captureOrientation; // @dynamic captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic) long long persistenceOptions;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property (nonatomic) unsigned short sessionIdentifier; // @dynamic sessionIdentifier;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;

@end

