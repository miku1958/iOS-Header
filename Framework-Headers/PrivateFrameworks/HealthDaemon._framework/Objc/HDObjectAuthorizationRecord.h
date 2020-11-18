//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding>
{
    NSUUID *_objectID;
    NSUUID *_sourceID;
    long long _status;
    double _modificationDate;
}

@property (nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property (copy, nonatomic) NSUUID *objectID; // @synthesize objectID=_objectID;
@property (copy, nonatomic) NSUUID *sourceID; // @synthesize sourceID=_sourceID;
@property (nonatomic) long long status; // @synthesize status=_status;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
