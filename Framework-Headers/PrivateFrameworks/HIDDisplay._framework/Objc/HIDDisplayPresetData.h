//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject
{
    long long _index;
    HIDDisplayPresetInterface *_deviceRef;
}

@property (readonly) NSData *uniqueID;
@property (readonly) BOOL valid;
@property (readonly) BOOL writable;

- (void).cxx_destruct;
- (id)get:(id *)arg1;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)arg1 index:(long long)arg2;
- (BOOL)set:(id)arg1 error:(id *)arg2;
- (void)setHidDisplay:(id)arg1;

@end
