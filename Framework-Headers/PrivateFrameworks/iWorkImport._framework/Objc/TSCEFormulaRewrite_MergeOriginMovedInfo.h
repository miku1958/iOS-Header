//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_MergeOriginMovedInfo : NSObject
{
    unordered_map_ddbde191 _mergeOriginsMap;
    unordered_map_ddbde191 _reverseOriginsMap;
}

@property (readonly, nonatomic) const unordered_map_ddbde191 *mergeOriginsMap; // @synthesize mergeOriginsMap=_mergeOriginsMap;
@property (readonly, nonatomic) const unordered_map_ddbde191 *reverseOriginsMap; // @synthesize reverseOriginsMap=_reverseOriginsMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initFromMessage:(const struct MergeOriginMovedArchive *)arg1;
- (id)initWithMergeOriginsMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2;
- (void)saveToMessage:(struct MergeOriginMovedArchive *)arg1;

@end

