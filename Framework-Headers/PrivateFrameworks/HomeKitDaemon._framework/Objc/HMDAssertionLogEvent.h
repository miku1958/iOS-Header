//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDDiagnosticReportLogging-Protocol.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent <HMDDiagnosticReportLogging>
{
    NSString *_description;
    NSString *_reason;
}

@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *reason; // @synthesize reason=_reason;

+ (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReason:(id)arg1;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end

