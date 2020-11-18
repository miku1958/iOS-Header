//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CARSessionCommandDelegate-Protocol.h>

@class CARInputDeviceManager, CARSessionConfiguration, NSNumber, NSString;

@interface CARSession : NSObject <CARSessionCommandDelegate>
{
    BOOL _authenticated;
    CARSessionConfiguration *_configuration;
    CARInputDeviceManager *_inputDeviceManager;
}

@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (readonly, nonatomic) CARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CARInputDeviceManager *inputDeviceManager; // @synthesize inputDeviceManager=_inputDeviceManager;
@property (readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property (readonly, copy, nonatomic) NSNumber *nightMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MFiCertificateSerialNumber;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (id)initWithFigEndpoint:(id)arg1;
- (BOOL)ownsScreen;
- (BOOL)ownsTurnByTurnNavigation;
- (BOOL)recognizingSpeech;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (id)requestTurnByTurnNavigationOwnership;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;

@end
