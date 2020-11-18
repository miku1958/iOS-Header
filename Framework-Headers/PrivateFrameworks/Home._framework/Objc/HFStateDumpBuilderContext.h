//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _excludePrimaryID;
    unsigned long long _detailLevel;
    unsigned long long _outputStyle;
    NSSet *_objectsToExclude;
    NSDictionary *_userInfo;
    NSString *_multilinePrefix;
}

@property (nonatomic) unsigned long long detailLevel; // @synthesize detailLevel=_detailLevel;
@property (nonatomic) BOOL excludePrimaryID; // @synthesize excludePrimaryID=_excludePrimaryID;
@property (copy, nonatomic) NSString *multilinePrefix; // @synthesize multilinePrefix=_multilinePrefix;
@property (copy, nonatomic) NSSet *objectsToExclude; // @synthesize objectsToExclude=_objectsToExclude;
@property (nonatomic) unsigned long long outputStyle; // @synthesize outputStyle=_outputStyle;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)contextWithDetailLevel:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)copyWithDetailLevel:(unsigned long long)arg1;
- (id)copyWithOutputStyle:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)derivedOutputStyle;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithDetailLevel:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

