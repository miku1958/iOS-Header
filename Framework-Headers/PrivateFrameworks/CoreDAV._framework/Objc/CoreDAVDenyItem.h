//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem
{
    NSMutableSet *_privileges;
}

@property (strong, nonatomic) NSMutableSet *privileges; // @synthesize privileges=_privileges;

+ (id)copyParseRules;
- (void).cxx_destruct;
- (void)addPrivilege:(id)arg1;
- (id)description;
- (id)init;
- (void)write:(id)arg1;

@end

