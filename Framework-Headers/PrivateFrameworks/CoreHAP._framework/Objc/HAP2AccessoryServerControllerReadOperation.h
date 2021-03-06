//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@class HAP2ControllerReadRequest, NSIndexSet;

@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation
{
    NSIndexSet *_cachedCharacteristicIndices;
    HAP2ControllerReadRequest *_readRequest;
}

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_sendRequest;
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;

@end

