//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSUserDefaults;

@interface DOCTagLocalStorage : NSObject
{
    NSUserDefaults *_userDefaults;
}

@property (strong, nonatomic) NSOrderedSet *discoveredTags;
@property (nonatomic) long long tagSerialNumber;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property (strong, nonatomic) NSOrderedSet *userTags;

+ (id)sharedAppGroupStorage;
- (void).cxx_destruct;
- (id)_unarchivedTagsFromData:(id)arg1;
- (id)init;

@end
