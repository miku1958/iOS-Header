//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPUAProgressItem : NSObject
{
    unsigned int _expectedCount;
    unsigned int _completeCount;
    unsigned int _errorCount;
    unsigned int _deleteCount;
    NSString *_bundleID;
    NSString *_uaID;
    NSString *_relatedID;
}

@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) unsigned int completeCount; // @synthesize completeCount=_completeCount;
@property (nonatomic) unsigned int deleteCount; // @synthesize deleteCount=_deleteCount;
@property (nonatomic) unsigned int errorCount; // @synthesize errorCount=_errorCount;
@property (nonatomic) unsigned int expectedCount; // @synthesize expectedCount=_expectedCount;
@property (strong, nonatomic) NSString *relatedID; // @synthesize relatedID=_relatedID;
@property (strong, nonatomic) NSString *uaID; // @synthesize uaID=_uaID;

+ (void)initialize;
+ (void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2;
- (void).cxx_destruct;
- (void)add;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)update:(int)arg1;

@end
