//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray;

@interface MRCompositeMessage : MRProtocolMessage
{
    NSMutableArray *_messages;
}

@property (readonly, nonatomic) NSArray *messages;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)init;

@end
