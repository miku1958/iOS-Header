//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSFormatter, NSString;
@protocol NSObject;

@interface HMFAttributeDescription : NSObject <HMFObject>
{
    NSString *_name;
    id<NSObject> _value;
    unsigned long long _options;
    NSFormatter *_formatter;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<NSObject> value; // @synthesize value=_value;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

