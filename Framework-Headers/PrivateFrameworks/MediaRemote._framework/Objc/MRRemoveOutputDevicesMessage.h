//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUIDs:(id)arg1;
- (unsigned long long)type;

@end

