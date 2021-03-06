//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage
{
    MRAVOutputDevice *_route;
}

@property (readonly, nonatomic) long long inputType;
@property (readonly, nonatomic) MRAVOutputDevice *route;

- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 inputType:(long long)arg2;
- (unsigned long long)type;

@end

