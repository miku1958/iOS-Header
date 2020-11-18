//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMDistinctPersistenceCopying-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>

@class CLLocation, NSString, NSURL;

@interface CAMCaptureRequest : NSObject <NSCopying, CAMDistinctPersistenceCopying>
{
    long long _origin;
    unsigned int _assertionIdentifier;
    BOOL _capturedFromPhotoBooth;
    CLLocation *_location;
    long long _persistenceOptions;
    unsigned long long _deferredPersistenceOptions;
    long long _temporaryPersistenceOptions;
    NSURL *_localDestinationURL;
    NSString *_persistenceUUID;
    BOOL _shouldExtractDiagnosticsFromMetadata;
    BOOL _shouldPersistDiagnosticsToSidecar;
    BOOL _shouldDelayRemotePersistence;
    unsigned short _sessionIdentifier;
    long long _captureDevice;
    long long _captureMode;
    long long _captureOrientation;
    long long _physicalButtonType;
    long long _type;
}

@property (readonly, nonatomic) unsigned int assertionIdentifier; // @synthesize assertionIdentifier=_assertionIdentifier;
@property (readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property (readonly, nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
@property (readonly, nonatomic) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property (readonly, nonatomic) BOOL capturedFromPhotoBooth; // @synthesize capturedFromPhotoBooth=_capturedFromPhotoBooth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long deferredPersistenceOptions; // @synthesize deferredPersistenceOptions=_deferredPersistenceOptions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property (readonly, nonatomic) long long persistenceOptions; // @synthesize persistenceOptions=_persistenceOptions;
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property (readonly, nonatomic) long long physicalButtonType; // @synthesize physicalButtonType=_physicalButtonType;
@property (readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) BOOL shouldDelayRemotePersistence; // @synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence;
@property (readonly, nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; // @synthesize shouldExtractDiagnosticsFromMetadata=_shouldExtractDiagnosticsFromMetadata;
@property (readonly, nonatomic) BOOL shouldPersistDiagnosticsToSidecar; // @synthesize shouldPersistDiagnosticsToSidecar=_shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long temporaryPersistenceOptions; // @synthesize temporaryPersistenceOptions=_temporaryPersistenceOptions;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)distinctPersistenceCopy;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)initWithType:(long long)arg1;
- (BOOL)shouldPersistToIncomingDirectory;
- (BOOL)shouldProtectPersistence;

@end
