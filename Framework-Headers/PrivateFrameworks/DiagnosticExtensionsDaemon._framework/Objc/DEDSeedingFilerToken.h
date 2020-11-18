//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject
{
    NSNumber *_entityID;
    NSString *_token;
    NSNumber *_dsid;
    long long _submissionType;
}

@property (readonly, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property (readonly, nonatomic) NSNumber *entityID; // @synthesize entityID=_entityID;
@property (readonly, nonatomic) long long submissionType; // @synthesize submissionType=_submissionType;
@property (readonly, nonatomic) NSString *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (id)compiledEntityID;
- (id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4;

@end
