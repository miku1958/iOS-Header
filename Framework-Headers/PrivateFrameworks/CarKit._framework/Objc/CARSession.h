//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CARSessionCommandDelegate-Protocol.h>

@class CARInputDeviceManager, CARSessionConfiguration, NSArray, NSDictionary, NSNumber, NSString;

@interface CARSession : NSObject <CARSessionCommandDelegate>
{
    struct OpaqueFigEndpoint *_endpoint;
    BOOL _authenticated;
    CARSessionConfiguration *_configuration;
    NSDictionary *_APEndPointInfo;
    CARInputDeviceManager *_inputDeviceManager;
    NSArray *_screenInfo;
    NSArray *_screenIDs;
}

@property (readonly, copy, nonatomic) NSDictionary *APEndPointInfo; // @synthesize APEndPointInfo=_APEndPointInfo;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (readonly, nonatomic) CARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CARInputDeviceManager *inputDeviceManager; // @synthesize inputDeviceManager=_inputDeviceManager;
@property (readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property (readonly, copy, nonatomic) NSNumber *nightMode;
@property (copy, nonatomic) NSArray *screenIDs; // @synthesize screenIDs=_screenIDs;
@property (copy, nonatomic) NSArray *screenInfo; // @synthesize screenInfo=_screenInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MFiCertificateSerialNumber;
- (id)_endpointValueForKey:(struct __CFString *)arg1;
- (void)_fetchAuthenticationStatus;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (struct OpaqueFigEndpoint *)endpoint;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (unsigned long long)navigationOwner;
- (BOOL)ownsScreen;
- (BOOL)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestTurnByTurnOwnership;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;

@end

