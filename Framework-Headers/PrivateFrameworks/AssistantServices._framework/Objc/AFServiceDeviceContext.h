//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSUUID;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_roomName;
    long long _proximity;
    NSArray *_contextSnapshots;
    NSDictionary *_serializedContextByKey;
    NSDictionary *_metricsContext;
}

@property (readonly, copy, nonatomic) NSArray *contextSnapshots; // @synthesize contextSnapshots=_contextSnapshots;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metricsContext; // @synthesize metricsContext=_metricsContext;
@property (readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property (readonly, copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey; // @synthesize serializedContextByKey=_serializedContextByKey;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 mediaRouteIdentifier:(id)arg3 roomName:(id)arg4 proximity:(long long)arg5 contextSnapshots:(id)arg6 serializedContextByKey:(id)arg7 metricsContext:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

