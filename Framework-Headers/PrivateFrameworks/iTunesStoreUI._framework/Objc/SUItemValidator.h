//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject
{
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property (readonly, nonatomic) NSArray *validationTests;

- (void)addCollectionValidationTests:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)dealloc;
- (void)removeValidationTest:(id)arg1;
- (BOOL)validateItems:(id)arg1 error:(id *)arg2;
- (BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id *)arg3;

@end

