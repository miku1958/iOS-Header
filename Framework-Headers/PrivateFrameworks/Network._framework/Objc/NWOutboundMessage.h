//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWMessage.h>

@class NSObject;
@protocol OS_nw_outbound_message;

@interface NWOutboundMessage : NWMessage
{
    NSObject<OS_nw_outbound_message> *_internalMessage;
}

@property (nonatomic) unsigned long long deadlineMilliseconds;
@property (strong) NSObject<OS_nw_outbound_message> *internalMessage; // @synthesize internalMessage=_internalMessage;
@property (nonatomic) unsigned int relativePriority;

- (void).cxx_destruct;
- (void)addAntecedent:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;
- (void)setNumber:(unsigned long long)arg1 forDomain:(id)arg2 key:(id)arg3;

@end

