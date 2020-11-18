//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <AudioToolbox/AUAudioUnitXPCProtocol-Protocol.h>

@class AUAudioUnit, AUAudioUnitViewService, AUParameterTree, NSMutableArray, NSObject;
@protocol AUAudioUnitHostProtocol, OS_dispatch_queue, OS_voucher;

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol>
{
    AUAudioUnit *_audioUnit;
    BOOL _isUIExtension;
    struct AudioComponentDescription _componentDescription;
    id<AUAudioUnitHostProtocol> _remoteHost;
    struct AUExtRenderingServer *_renderServer;
    NSObject<OS_dispatch_queue> *_propertyObserverQueue;
    NSMutableArray *_pendingChangedProperties;
    int _deferPropertyChangeNotifications;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    AUAudioUnitViewService *_viewService;
}

@property (nonatomic) AUAudioUnitViewService *viewService; // @synthesize viewService=_viewService;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (id)_fetchAndClearPendingChangedProperties;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)_identifyBus:(id)arg1 scope:(unsigned int *)arg2 element:(unsigned int *)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)close:(CDUnknownBlockType)arg1;
- (id)currentParameterTree;
- (void)dealloc;
- (void)getBusses:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getParameter:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getParameterTree:(CDUnknownBlockType)arg1;
- (id)iOSViewController;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned int)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(CDUnknownBlockType)arg8;
- (void)initialize:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)open:(CDUnknownBlockType)arg1;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)selectViewConfiguration:(id)arg1;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setWorkIntervalPort:(id)arg1;
- (void)supportedViewConfigurations:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)uninitialize:(CDUnknownBlockType)arg1;
- (void)valueForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)valueForProperty:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

