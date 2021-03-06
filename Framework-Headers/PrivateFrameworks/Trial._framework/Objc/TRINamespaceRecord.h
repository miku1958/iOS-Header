//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _compatibilityVersion;
    NSString *_name;
    NSURL *_treatmentURL;
}

@property (readonly, nonatomic) unsigned int compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSURL *treatmentURL; // @synthesize treatmentURL=_treatmentURL;

+ (id)recordWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithReplacementTreatmentURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRecord:(id)arg1;

@end

