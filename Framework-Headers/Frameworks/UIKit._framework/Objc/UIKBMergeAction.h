//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying>
{
    NSString *_remainingKeyName;
    NSString *_disappearingKeyName;
    NSArray *_orderedKeyList;
    UIKBGeometry *_factors;
}

@property (strong, nonatomic) NSString *disappearingKeyName; // @synthesize disappearingKeyName=_disappearingKeyName;
@property (strong, nonatomic) UIKBGeometry *factors; // @synthesize factors=_factors;
@property (strong, nonatomic) NSArray *orderedKeyList; // @synthesize orderedKeyList=_orderedKeyList;
@property (strong, nonatomic) NSString *remainingKeyName; // @synthesize remainingKeyName=_remainingKeyName;

+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;
+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

