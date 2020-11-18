//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFPBCodable-Protocol.h>

@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable>
{
    long long _minimumSupportedVersion;
    NSString *_identifier;
    long long _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

+ (id)identifierFromData:(id)arg1 error:(id *)arg2;
+ (BOOL)isUnsupportedVersionError:(id)arg1;
+ (BOOL)supportsVersion:(long long)arg1;
+ (id)unsupportedVersionError;
+ (long long)version;
- (void).cxx_destruct;
- (id)emptyProtobufError;
- (id)init;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (BOOL)readFrom:(id)arg1 error:(id *)arg2;
- (BOOL)readMessageFromData:(id)arg1 error:(id *)arg2;
- (id)writeMessageToWriter:(id)arg1 error:(id *)arg2;
- (BOOL)writeTo:(id)arg1 error:(id *)arg2;

@end
