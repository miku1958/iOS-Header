//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class NSExpression, NSString;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_typeString;
    NSExpression *_goalExpression;
}

@property (readonly, nonatomic) NSExpression *goalExpression; // @synthesize goalExpression=_goalExpression;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;

+ (id)definitionFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dateComponentsFromIdentifier;
- (id)_goalExpressionValue;
- (unsigned long long)_monthlyChallengeTypeFromTypeString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)template;

@end
