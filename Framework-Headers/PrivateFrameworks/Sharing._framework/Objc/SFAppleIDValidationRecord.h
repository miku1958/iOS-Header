//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding>
{
    NSData *_data;
    NSString *_identifier;
    NSDate *_nextCheckDate;
    NSNumber *_version;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (strong, nonatomic) NSDate *nextCheckDate; // @synthesize nextCheckDate=_nextCheckDate;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValidationRecord:(id)arg1;

@end

