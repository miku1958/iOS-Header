//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANPSetShuffleMode : SADomainCommand
{
}

@property (copy, nonatomic) NSString *shuffleMode;

+ (id)setShuffleMode;
+ (id)setShuffleModeWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
