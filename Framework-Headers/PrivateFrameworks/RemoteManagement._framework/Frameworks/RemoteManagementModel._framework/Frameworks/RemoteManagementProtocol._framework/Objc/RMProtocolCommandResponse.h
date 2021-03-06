//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase
{
    NSString *_responseCommandToken;
    RMProtocolCommandResponse_Command *_responseCommand;
}

@property (copy, nonatomic) RMProtocolCommandResponse_Command *responseCommand; // @synthesize responseCommand=_responseCommand;
@property (copy, nonatomic) NSString *responseCommandToken; // @synthesize responseCommandToken=_responseCommandToken;

+ (id)requestWithCommandToken:(id)arg1 command:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeWithType:(short)arg1;

@end

