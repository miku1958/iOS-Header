//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider
{
    HFItemProvider *_sourceProvider;
    CDUnknownBlockType _transformationBlock;
    NSMutableDictionary *_transformedItems;
}

@property (strong, nonatomic) HFItemProvider *sourceProvider; // @synthesize sourceProvider=_sourceProvider;
@property (copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property (strong, nonatomic) NSMutableDictionary *transformedItems; // @synthesize transformedItems=_transformedItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSourceProvider:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

