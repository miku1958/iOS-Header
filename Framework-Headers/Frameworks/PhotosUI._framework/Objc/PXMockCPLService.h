//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLService-Protocol.h>

@class NSString, PXCPLServiceStatus;
@protocol OS_dispatch_queue, PXCPLService;

@interface PXMockCPLService : NSObject <PXCPLService>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<PXCPLService> _cplService;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_mockEvent;
+ (BOOL)shouldUseMockService;
- (void).cxx_destruct;
- (void)_deliverMockServiceStatus;
- (void)_serviceStatusDidChange:(id)arg1;
- (BOOL)canPerformAction:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCPLService:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performAction:(long long)arg1;

@end

