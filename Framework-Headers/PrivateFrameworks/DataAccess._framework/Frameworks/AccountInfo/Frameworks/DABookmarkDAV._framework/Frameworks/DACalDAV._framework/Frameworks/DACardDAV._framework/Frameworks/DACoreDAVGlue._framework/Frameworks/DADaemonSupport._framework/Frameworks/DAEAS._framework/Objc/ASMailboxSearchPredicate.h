//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject
{
    NSPredicate *_predicate;
}

@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;

- (void).cxx_destruct;
- (id)getString;
- (id)getStringForComparisonPredicate:(id)arg1;
- (id)getStringForCompoundPredicate:(id)arg1;
- (id)getStringForPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (BOOL)isValid;

@end

