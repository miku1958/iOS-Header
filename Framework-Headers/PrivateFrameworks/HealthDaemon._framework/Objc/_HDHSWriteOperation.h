//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject
{
    BOOL _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    CDUnknownBlockType _completion;
}

@property (strong, nonatomic) HDHealthServiceCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (nonatomic) BOOL expectResponse; // @synthesize expectResponse=_expectResponse;

- (void).cxx_destruct;

@end

