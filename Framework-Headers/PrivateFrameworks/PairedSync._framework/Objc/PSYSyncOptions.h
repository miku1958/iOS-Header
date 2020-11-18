//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSUUID, PSYTestInput;

@interface PSYSyncOptions : NSObject <NSSecureCoding>
{
    BOOL _dryRun;
    BOOL _terminateDuringDryRun;
    PSYTestInput *_testInput;
    NSUUID *_pairingIdentifier;
    NSUUID *_sessionIdentifier;
    unsigned long long _syncSessionType;
}

@property (nonatomic) BOOL dryRun; // @synthesize dryRun=_dryRun;
@property (strong, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property (strong, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property (nonatomic) BOOL terminateDuringDryRun; // @synthesize terminateDuringDryRun=_terminateDuringDryRun;
@property (strong, nonatomic) PSYTestInput *testInput; // @synthesize testInput=_testInput;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

