//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long movieRestriction;
@property (readonly) Class superclass;
@property (nonatomic) long long tvRestriction;

+ (id)mediaContentRatingRestrictions;
+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

