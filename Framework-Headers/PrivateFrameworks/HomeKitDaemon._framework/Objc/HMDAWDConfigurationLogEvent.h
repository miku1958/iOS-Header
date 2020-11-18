//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDAWDConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _isResidentCapable;
    BOOL _isResidentEnabled;
    unsigned int _databaseSize;
    unsigned int _metadataVersion;
    NSMutableArray *_homeConfigurations;
}

@property unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property BOOL isResidentCapable; // @synthesize isResidentCapable=_isResidentCapable;
@property BOOL isResidentEnabled; // @synthesize isResidentEnabled=_isResidentEnabled;
@property unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)metricForAWD;

@end

