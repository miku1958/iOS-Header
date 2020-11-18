//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTPuppetStore : NSObject
{
    NSArray *_puppetRecords;
}

@property (copy, nonatomic) NSArray *puppetRecords; // @synthesize puppetRecords=_puppetRecords;

+ (id)createPuppetRecords;
- (void).cxx_destruct;
- (id)allAvatarPuppetsExcluding:(id)arg1 error:(id *)arg2;
- (id)allAvatarPuppetsWithError:(id *)arg1;
- (id)allPuppetRecords;
- (id)avatarPuppetsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)initWithEnvironment:(id)arg1;
- (void)loadPuppetRecordsIfNeeded;

@end
