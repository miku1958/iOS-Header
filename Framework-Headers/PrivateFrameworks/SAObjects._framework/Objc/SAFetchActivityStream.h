//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL ascending;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *fromDate;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *matchingMetadataKeys;
@property (copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property (copy, nonatomic) NSString *sortBy;
@property (copy, nonatomic) NSArray *streamTypes;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;

+ (id)fetchActivityStream;
+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

