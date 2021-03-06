//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSString *_property;
    id _value;
    long long _comparisonType;
}

@property (nonatomic) long long comparisonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *property;
@property (readonly) Class superclass;
@property (copy, nonatomic) id value;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;

@end

