//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InfoKit/NSCopying-Protocol.h>
#import <InfoKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INKContent : NSObject <NSSecureCoding, NSCopying>
{
    long long _customizationID;
    NSArray *_dismissalEvents;
    NSString *_identifier;
}

@property (readonly, nonatomic) long long customizationID; // @synthesize customizationID=_customizationID;
@property (readonly, nonatomic) NSArray *dismissalEvents; // @synthesize dismissalEvents=_dismissalEvents;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)classSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end
