//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *end;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *seasonType;
@property (copy, nonatomic) NSDate *start;
@property (readonly) Class superclass;

+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

