//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>
{
    unsigned long long _outgoingRecipientCount;
    unsigned long long _incomingSenderCount;
    unsigned long long _incomingRecipientCount;
    NSDate *_lastOutgoingRecipientDate;
    NSDate *_lastIncomingSenderDate;
    NSDate *_lastIncomingRecipientDate;
    NSDate *_firstOutgoingRecipientDate;
    NSDate *_firstIncomingSenderDate;
    NSDate *_firstIncomingRecipientDate;
}

@property (strong) NSDate *firstIncomingRecipientDate; // @synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate;
@property (strong) NSDate *firstIncomingSenderDate; // @synthesize firstIncomingSenderDate=_firstIncomingSenderDate;
@property (strong) NSDate *firstOutgoingRecipientDate; // @synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate;
@property unsigned long long incomingRecipientCount; // @synthesize incomingRecipientCount=_incomingRecipientCount;
@property unsigned long long incomingSenderCount; // @synthesize incomingSenderCount=_incomingSenderCount;
@property (strong) NSDate *lastIncomingRecipientDate; // @synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate;
@property (strong) NSDate *lastIncomingSenderDate; // @synthesize lastIncomingSenderDate=_lastIncomingSenderDate;
@property (strong) NSDate *lastOutgoingRecipientDate; // @synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate;
@property unsigned long long outgoingRecipientCount; // @synthesize outgoingRecipientCount=_outgoingRecipientCount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstDate:(id)arg1 updatedWith:(id)arg2;
- (id)firstInteractionDate;
- (double)incomingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (id)lastDate:(id)arg1 updatedWith:(id)arg2;
- (id)lastInteractionDate;
- (double)outgoingRecipientTimeInterval;
- (void)updateWithStatistics:(id)arg1;

@end

