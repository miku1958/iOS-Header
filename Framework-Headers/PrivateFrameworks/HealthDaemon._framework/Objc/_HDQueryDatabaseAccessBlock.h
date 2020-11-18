//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject
{
    CDUnknownBlockType _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    long long _qualityOfService;
    double _creationTime;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property (readonly, copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property (readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (readonly, weak, nonatomic) HDQueryServer *queryServer; // @synthesize queryServer=_queryServer;
@property (readonly, nonatomic) BOOL shouldThrottle;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queryServer:(id)arg2;
- (BOOL)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2;

@end
