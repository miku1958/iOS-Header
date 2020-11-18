//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSArray, NSDate, NSString;

@interface TPSContextualRule : TPSSerializableObject
{
    NSDate *_matchedDate;
    NSString *_identifier;
    NSArray *_eventIdentifiers;
}

@property (copy, nonatomic) NSArray *eventIdentifiers; // @synthesize eventIdentifiers=_eventIdentifiers;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDate *matchedDate; // @synthesize matchedDate=_matchedDate;

+ (id)classSet;
+ (id)eventsForRuleDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)restartTracking;

@end
