//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLSqliteQueryPlanNode : NSObject
{
    int _identifier;
    int _parentIdentifier;
    int _unused;
    NSString *_nodeDescription;
}

@property (readonly) int identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSString *nodeDescription; // @synthesize nodeDescription=_nodeDescription;
@property (readonly) int parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property (readonly) int unused; // @synthesize unused=_unused;

- (void).cxx_destruct;
- (id)initWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4;

@end

