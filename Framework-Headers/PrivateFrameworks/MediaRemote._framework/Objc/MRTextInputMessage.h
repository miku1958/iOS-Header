//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRTextInputMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) NSString *text;

- (id)initWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (unsigned long long)type;

@end

