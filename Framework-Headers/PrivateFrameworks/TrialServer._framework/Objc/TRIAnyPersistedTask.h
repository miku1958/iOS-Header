//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage
{
}

@property (nonatomic) BOOL hasSerialized; // @dynamic hasSerialized;
@property (nonatomic) BOOL hasType; // @dynamic hasType;
@property (copy, nonatomic) NSData *serialized; // @dynamic serialized;
@property (nonatomic) int type; // @dynamic type;

+ (id)descriptor;

@end

