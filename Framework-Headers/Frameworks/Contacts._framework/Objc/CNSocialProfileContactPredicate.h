//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;
}

@property (readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocialProfile:(id)arg1;

@end
