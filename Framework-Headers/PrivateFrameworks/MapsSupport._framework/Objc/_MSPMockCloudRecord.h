//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudRecord-Protocol.h>
#import <MapsSupport/NSCoding-Protocol.h>
#import <MapsSupport/NSMutableCopying-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MSPMockCloudRecord : NSObject <MSPCloudRecord, NSMutableCopying, NSCoding>
{
    NSMutableDictionary *_values;
    NSDate *_cloudRecordModificationDate;
    NSString *_name;
    NSString *_type;
}

@property (readonly, nonatomic) NSDate *cloudRecordModificationDate; // @synthesize cloudRecordModificationDate=_cloudRecordModificationDate;
@property (readonly, nonatomic) NSString *cloudRecordName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)updateModificationDate;

@end

