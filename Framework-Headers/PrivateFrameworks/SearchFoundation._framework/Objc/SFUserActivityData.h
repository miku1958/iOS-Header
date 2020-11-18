//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFUserActivityData-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFUserActivityData : NSObject <SFUserActivityData, NSSecureCoding, NSCopying>
{
    NSString *_activityType;
    NSArray *_userInfo;
}

@property (copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userInfo; // @synthesize userInfo=_userInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
