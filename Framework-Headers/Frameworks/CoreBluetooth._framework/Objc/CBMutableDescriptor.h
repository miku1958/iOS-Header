//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor
{
    NSNumber *_ID;
}

@property (strong) NSNumber *ID; // @synthesize ID=_ID;

- (void)dealloc;
- (id)description;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2;

@end

