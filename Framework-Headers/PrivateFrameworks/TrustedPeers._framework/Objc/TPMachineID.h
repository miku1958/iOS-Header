//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TPMachineID : NSObject
{
    NSString *_machineID;
    unsigned long long _status;
    NSDate *_modified;
}

@property (readonly) NSString *machineID; // @synthesize machineID=_machineID;
@property (readonly) NSDate *modified; // @synthesize modified=_modified;
@property (readonly) unsigned long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3;

@end

