//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)
- (const struct CDXTicket *)CDXTicket;
- (id)CDXTicketExpirationDate;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketIsStub;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
- (unsigned long long)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketWellFormed;
- (struct CDXTicket *)mutableCDXTicket;
@end

