//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceController.h>

#import <MediaRemote/MRExternalDeviceControllerDelegate-Protocol.h>

@class NSString, _MRTelevisionControllerBlockCallback;

__attribute__((visibility("hidden")))
@interface MRTelevisionController : MRExternalDeviceController <MRExternalDeviceControllerDelegate>
{
    _MRTelevisionControllerBlockCallback *_discoveryCallback;
    _MRTelevisionControllerBlockCallback *_removalCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback; // @synthesize removalCallback=_removalCallback;
@property (readonly) Class superclass;

+ (Class)externalDeviceClass;
- (void).cxx_destruct;
- (void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2;
- (id)init;

@end

