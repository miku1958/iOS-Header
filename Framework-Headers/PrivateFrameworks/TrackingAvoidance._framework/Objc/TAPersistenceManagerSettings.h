//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TAPersistenceManagerSettings : NSObject
{
    NSURL *_persistenceDirectoryURL;
    NSString *_persistenceStoreFileName;
}

@property (strong, nonatomic) NSURL *persistenceDirectoryURL; // @synthesize persistenceDirectoryURL=_persistenceDirectoryURL;
@property (strong, nonatomic) NSString *persistenceStoreFileName; // @synthesize persistenceStoreFileName=_persistenceStoreFileName;

- (void).cxx_destruct;
- (id)_getStoreURL;
- (id)init;
- (id)initWithDirectoryURLOrDefault:(id)arg1 storeFileNameOrDefault:(id)arg2;

@end

