//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject
{
}

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *pronunciation;

+ (id)speakablePhrase;
+ (id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
