//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDAnimateBehavior : PDTimeNode
{
    PDAnimationTarget *mTgtElement;
    NSMutableArray *mAttributeNames;
}

@property (strong, nonatomic) NSMutableArray *attributeNames; // @synthesize attributeNames=mAttributeNames;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end

