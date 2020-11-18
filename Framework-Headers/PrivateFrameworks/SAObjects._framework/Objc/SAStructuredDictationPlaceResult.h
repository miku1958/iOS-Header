//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *placeResultType;
@property (copy, nonatomic) NSData *resultData;
@property (readonly) Class superclass;

+ (id)structuredDictationPlaceResult;
+ (id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
