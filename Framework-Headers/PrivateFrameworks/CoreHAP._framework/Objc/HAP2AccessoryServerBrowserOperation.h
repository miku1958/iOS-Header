//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

@class NSError, NSMutableSet;

@interface HAP2AccessoryServerBrowserOperation : HAP2LoggingObject
{
    unsigned long long _type;
    NSMutableSet *_pendingCoordinators;
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableSet *pendingCoordinators; // @synthesize pendingCoordinators=_pendingCoordinators;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1;

@end

