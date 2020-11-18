//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSNumber *average;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *selected;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;

+ (id)metadata;
+ (id)metadataWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

