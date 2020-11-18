//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface CUTDSDevice : NSObject
{
    BOOL _paired;
    NSUUID *_identifier;
    NSData *_bloomFilterData;
    NSData *_deviceAddress;
    unsigned long long _lastSeenTicks;
}

@property (copy, nonatomic) NSData *bloomFilterData; // @synthesize bloomFilterData=_bloomFilterData;
@property (copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long lastSeenTicks; // @synthesize lastSeenTicks=_lastSeenTicks;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;

- (void).cxx_destruct;
- (id)description;

@end

