//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SACalendar, SALocalSearchRating, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier;
@property (strong, nonatomic) SACalendar *lastUpdated;
@property (copy, nonatomic) NSString *publication;
@property (strong, nonatomic) SAUIAppPunchOut *reviewPunchOut;
@property (strong, nonatomic) SALocalSearchRating *reviewRating;
@property (readonly) Class superclass;

+ (id)review;
+ (id)reviewWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

