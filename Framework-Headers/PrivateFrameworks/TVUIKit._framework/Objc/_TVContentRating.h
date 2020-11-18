//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TVContentRating : NSObject
{
    long long _ratingSystem;
    NSString *_ratingLabel;
    unsigned long long _rank;
    NSString *_ratingDescription;
}

@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property (readonly, copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property (readonly, copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property (readonly, nonatomic) long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property (readonly, nonatomic) long long ratingSystemKind;
@property (readonly, copy, nonatomic) NSString *ratingSystemString;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)new;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRatingSystem:(long long)arg1 explicitContent:(BOOL)arg2;
- (id)initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)initWithStringRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
