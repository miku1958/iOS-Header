//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSData;

@interface _HDHSWriteOperation : NSObject
{
    BOOL _expectResponse;
    CBPeripheral *_peripheral;
    NSData *_data;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) BOOL expectResponse; // @synthesize expectResponse=_expectResponse;
@property (strong, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;

- (void).cxx_destruct;

@end
