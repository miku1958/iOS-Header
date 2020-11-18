//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLRegionsClusteringItem;

@interface PLRegionsHierarchicalClusteringObject : NSObject
{
    id<PLRegionsClusteringItem> _object;
    unsigned long long _index;
}

@property unsigned long long index; // @synthesize index=_index;
@property (readonly, nonatomic) id<PLRegionsClusteringItem> object; // @synthesize object=_object;

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2;
- (void).cxx_destruct;

@end

