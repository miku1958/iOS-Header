//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection
{
    NSArray *_collections;
}

@property (strong, nonatomic) NSArray *collections; // @synthesize collections=_collections;

- (void).cxx_destruct;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)description;
- (id)initWithCollections:(id)arg1;

@end
