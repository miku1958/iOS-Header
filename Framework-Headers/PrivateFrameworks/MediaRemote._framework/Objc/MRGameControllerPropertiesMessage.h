//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) unsigned long long controllerID;
@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;

- (id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2;
- (unsigned long long)type;

@end
