//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *diagnosticReports;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;

+ (id)latencyDiagnosticReport;
+ (id)latencyDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

