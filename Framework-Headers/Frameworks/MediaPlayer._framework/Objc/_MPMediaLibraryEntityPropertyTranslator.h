//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryEntityPropertyTranslator : NSObject
{
    CDUnknownBlockType _sortTransformer;
    CDUnknownBlockType _valueTransformer;
    shared_ptr_217a6612 _propertiesToFetchMap;
    shared_ptr_217a6612 _propertiesToSortMap;
}

@property (nonatomic) shared_ptr_217a6612 propertiesToFetchMap; // @synthesize propertiesToFetchMap=_propertiesToFetchMap;
@property (nonatomic) shared_ptr_217a6612 propertiesToSortMap; // @synthesize propertiesToSortMap=_propertiesToSortMap;
@property (copy, nonatomic) CDUnknownBlockType sortTransformer; // @synthesize sortTransformer=_sortTransformer;
@property (copy, nonatomic) CDUnknownBlockType valueTransformer; // @synthesize valueTransformer=_valueTransformer;

- (id).cxx_construct;
- (void).cxx_destruct;

@end

