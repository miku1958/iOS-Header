//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _DKDataProtectionMaster;

@interface _DKDataProtectionStateMonitor : NSObject
{
    _DKDataProtectionMaster *_master;
    NSUUID *_handlerUUID;
    CDUnknownBlockType _changeHandler;
}

@property (copy) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)isDataAvailableFor:(id)arg1;

@end

