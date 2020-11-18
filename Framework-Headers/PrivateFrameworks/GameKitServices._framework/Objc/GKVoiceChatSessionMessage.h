//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage
{
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (BOOL)_checkSize:(unsigned long long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (unsigned int)conferenceID;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)payload;
- (unsigned int)subtype;

@end

