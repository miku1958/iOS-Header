//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAppConfig, GEOAppState, GEODebugLogMessage, GEODeviceConfig, GEODeviceState, GEOPerformanceLogMessage, GEOUsageLogMessage, NSString;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    GEOAppConfig *_appConfig;
    GEOAppState *_appState;
    GEODebugLogMessage *_debugLogMessage;
    GEODeviceConfig *_deviceConfig;
    GEODeviceState *_deviceState;
    NSString *_logFacility;
    NSString *_logMessageString;
    int _logMessageSubType;
    int _logMessageType;
    GEOPerformanceLogMessage *_perfLogMessage;
    GEOUsageLogMessage *_usageLogMessage;
    struct {
        unsigned int logMessageSubType:1;
        unsigned int logMessageType:1;
    } _has;
}

@property (strong, nonatomic) GEOAppConfig *appConfig; // @synthesize appConfig=_appConfig;
@property (strong, nonatomic) GEOAppState *appState; // @synthesize appState=_appState;
@property (strong, nonatomic) GEODebugLogMessage *debugLogMessage; // @synthesize debugLogMessage=_debugLogMessage;
@property (strong, nonatomic) GEODeviceConfig *deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property (strong, nonatomic) GEODeviceState *deviceState; // @synthesize deviceState=_deviceState;
@property (readonly, nonatomic) BOOL hasAppConfig;
@property (readonly, nonatomic) BOOL hasAppState;
@property (readonly, nonatomic) BOOL hasDebugLogMessage;
@property (readonly, nonatomic) BOOL hasDeviceConfig;
@property (readonly, nonatomic) BOOL hasDeviceState;
@property (readonly, nonatomic) BOOL hasLogFacility;
@property (readonly, nonatomic) BOOL hasLogMessageString;
@property (nonatomic) BOOL hasLogMessageSubType;
@property (nonatomic) BOOL hasLogMessageType;
@property (readonly, nonatomic) BOOL hasPerfLogMessage;
@property (readonly, nonatomic) BOOL hasUsageLogMessage;
@property (strong, nonatomic) NSString *logFacility; // @synthesize logFacility=_logFacility;
@property (strong, nonatomic) NSString *logMessageString; // @synthesize logMessageString=_logMessageString;
@property (nonatomic) int logMessageSubType; // @synthesize logMessageSubType=_logMessageSubType;
@property (nonatomic) int logMessageType; // @synthesize logMessageType=_logMessageType;
@property (strong, nonatomic) GEOPerformanceLogMessage *perfLogMessage; // @synthesize perfLogMessage=_perfLogMessage;
@property (strong, nonatomic) GEOUsageLogMessage *usageLogMessage; // @synthesize usageLogMessage=_usageLogMessage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
