//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IPAPreviewSizeRegistry : NSObject
{
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (void).cxx_destruct;
- (void)addPolicy:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)policyForStyle:(unsigned long long)arg1;
- (id)policyForStyleObject:(id)arg1;

@end
