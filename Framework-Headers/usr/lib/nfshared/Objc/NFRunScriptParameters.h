//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <nfshared/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NFRunScriptParameters : NSObject <NSSecureCoding>
{
    BOOL _checkWhitelist;
    BOOL _initialSelectBeforeRun;
    BOOL _includeAPDUDuration;
    BOOL _deactivateAllApps;
    NSString *_seid;
    NSArray *_whitelistedAID;
    double _outTotalAPDUExecutionDuration;
    unsigned long long _outFinalSWStatus;
}

@property BOOL checkWhitelist; // @synthesize checkWhitelist=_checkWhitelist;
@property BOOL deactivateAllApps; // @synthesize deactivateAllApps=_deactivateAllApps;
@property BOOL includeAPDUDuration; // @synthesize includeAPDUDuration=_includeAPDUDuration;
@property BOOL initialSelectBeforeRun; // @synthesize initialSelectBeforeRun=_initialSelectBeforeRun;
@property unsigned long long outFinalSWStatus; // @synthesize outFinalSWStatus=_outFinalSWStatus;
@property double outTotalAPDUExecutionDuration; // @synthesize outTotalAPDUExecutionDuration=_outTotalAPDUExecutionDuration;
@property (strong) NSString *seid; // @synthesize seid=_seid;
@property (strong) NSArray *whitelistedAID; // @synthesize whitelistedAID=_whitelistedAID;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

