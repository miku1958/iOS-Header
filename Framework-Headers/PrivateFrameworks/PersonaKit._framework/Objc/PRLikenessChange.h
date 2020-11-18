//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PRLikenessChange : NSObject
{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_changedLikenessID;
    NSNumber *_changedLikenessVersion;
    NSArray *_dirtyLikenessProperties;
}

@property (copy, nonatomic) NSString *changedLikenessID; // @synthesize changedLikenessID=_changedLikenessID;
@property (copy, nonatomic) NSNumber *changedLikenessVersion; // @synthesize changedLikenessVersion=_changedLikenessVersion;
@property (copy, nonatomic) NSArray *dirtyLikenessProperties; // @synthesize dirtyLikenessProperties=_dirtyLikenessProperties;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2;
+ (unsigned long long)changeTypeFromDescription:(id)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;

@end
