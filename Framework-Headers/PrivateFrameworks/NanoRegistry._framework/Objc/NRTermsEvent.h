//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRPBTermsEvent.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding>
{
    BOOL _flaggedForSend;
    BOOL _writable;
    NSString *_termsDigest;
}

@property (nonatomic) BOOL flaggedForSend; // @synthesize flaggedForSend=_flaggedForSend;
@property (strong, nonatomic) NSString *termsDigest; // @synthesize termsDigest=_termsDigest;
@property (nonatomic) BOOL writable; // @synthesize writable=_writable;

+ (id)digestFromData:(id)arg1;
+ (id)eventWithProtobuf:(id)arg1;
+ (id)loadTermsWithPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setEventType:(unsigned long long)arg1;
- (void)_setLoggingProcessName:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1;
- (BOOL)isTermsAlreadyArchived;
- (void)saveTerms;
- (void)setAcknowledgedDeviceName:(id)arg1;
- (void)setAcknowledgedDeviceSerialNumber:(id)arg1;
- (void)setDisplayDeviceName:(id)arg1;
- (void)setDisplayDeviceSerialNumber:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventType:(int)arg1;
- (void)setLoggingProcessName:(id)arg1;
- (void)setPresentationLocation:(int)arg1;
- (void)setPresentationReason:(id)arg1;
- (void)setTermsText:(id)arg1;
- (id)termsText;
- (void)updateEventDate;

@end

