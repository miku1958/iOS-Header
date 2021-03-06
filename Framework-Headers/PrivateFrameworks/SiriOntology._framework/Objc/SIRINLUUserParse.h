//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface SIRINLUUserParse : NSObject <NSSecureCoding>
{
    NSArray *_userDialogActs;
    double _probability;
    NSUUID *_nsUUID;
    NSString *_parserId;
}

@property (strong, nonatomic) NSUUID *nsUUID; // @synthesize nsUUID=_nsUUID;
@property (strong, nonatomic) NSString *parserId; // @synthesize parserId=_parserId;
@property (nonatomic) double probability; // @synthesize probability=_probability;
@property (strong, nonatomic) NSArray *userDialogActs; // @synthesize userDialogActs=_userDialogActs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4;

@end

