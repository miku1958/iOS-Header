//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPUnknownField.h>

@class TSPLazyReferenceArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownFieldObjectReference : TSPUnknownField
{
    TSPLazyReferenceArray *_objects;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
