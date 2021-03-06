//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFApiResults-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
        unsigned int resultType:1;
    } _has;
    int _status;
    int _resultType;
    NSArray *_flights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int resultType; // @synthesize resultType=_resultType;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasResultType;
- (BOOL)hasStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

