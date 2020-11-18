//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGRealtimeSuggestion-Protocol.h>

@class NSString, SGContact;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>
{
    BOOL _isHarvested;
    int _state;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    unsigned long long _extractionType;
}

@property (readonly, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property (readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isHarvested; // @synthesize isHarvested=_isHarvested;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(id)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 contact:(id)arg2 identifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRealtimeContact:(id)arg1;
- (id)markedAsHarvested;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionType;

@end

