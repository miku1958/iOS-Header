//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary;

@interface MRSendCommandMessage : MRProtocolMessage
{
    NSDate *_serializationDate;
}

@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) void *playerPath;
@property (readonly, nonatomic) NSDate *serializationDate; // @synthesize serializationDate=_serializationDate;

- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(void *)arg3;
- (unsigned long long)type;

@end

